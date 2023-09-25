/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:39:32 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 22:28:01 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"bsq.h"

char			*copy_file(int fd);
char			**get_map(char *old_map);
int				get_col(char *old_map);
char			*make_row(char *old_map, int i);
t_symbol		get_symbol(char **map);
t_map_info		get_map_info(char **map, t_symbol symbol);
int				**solve_square_2nd(t_map_info map_info);
void			print_error(void);
void			b_s_q(int **dp, char **map, t_symbol symbol,
					t_map_info map_info);
t_map_info		check_map(char **map, t_symbol symbol, t_map_info map_info);

void	solve_square(int fd)
{
	char		**map;
	int			i;
	t_symbol	symbol;
	t_map_info	map_info;
	int			**dp;

	i = 0;
	map = get_map(copy_file(fd));
	symbol = get_symbol(map);
	map_info = get_map_info(map, symbol);
	map_info = check_map(map, symbol, map_info);
	if (map_info.error_flag > 0 || symbol.error_flag > 0)
	{
		print_error();
		return ;
	}
	dp = solve_square_2nd(map_info);
	b_s_q(dp, map, symbol, map_info);
}

char	**get_map(char *old_map)
{
	char	**map;
	int		col_num;
	int		i;
	int		index;

	col_num = get_col(old_map);
	map = (char **)malloc(sizeof(char *) * (col_num + 1));
	i = 0;
	index = 0;
	while (index < col_num)
	{
		if (old_map[i] != '\n')
			map[index++] = make_row(old_map, i);
		while (old_map[i] != '\n')
			i++;
		if (old_map[i] == '\n')
			i++;
	}
	map[index] = NULL;
	return (map);
}

int	get_col(char *old_map)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (old_map[i] != '\0')
	{
		if (old_map[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	*make_row(char *old_map, int i)
{
	int		j;
	char	*dest;

	j = 0;
	while (old_map[i + j] != '\n')
		j++;
	dest = (char *)malloc(sizeof(char) * (j + 1));
	if (dest == NULL)
		return (NULL);
	dest[j] = '\0';
	while (--j >= 0)
		dest[j] = old_map[i + j];
	return (dest);
}

t_map_info	check_map(char **map, t_symbol symbol, t_map_info map_info)
{
	int	i;
	int	j;

	i = 1;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] != symbol.full && map[i][j] != symbol.obstacle
				&& map[i][j] != symbol.empty)
				map_info.error_flag += 1;
			j++;
		}
		i++;
	}
	return (map_info);
}
