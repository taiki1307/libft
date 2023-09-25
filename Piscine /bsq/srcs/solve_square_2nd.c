/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_square_2nd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:34:27 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 21:52:47 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"bsq.h"

int		get_minimum(int **dp, int i, int j);
void	get_maximum(t_bsq *bsq, int i, int j, int **dp);
void	print_bsq(char **map, t_symbol symbol, t_bsq bsq);

int	**solve_square_2nd(t_map_info map_info)
{
	int	**dp;
	int	i;

	dp = (int **)malloc(sizeof(int *) * (map_info.col));
	if (dp == NULL)
		return (NULL);
	i = 0;
	while (i < map_info.col)
	{
		dp[i] = (int *)malloc(sizeof(int) * map_info.row);
		i++;
	}
	return (dp);
}

void	b_s_q(int **dp, char **map, t_symbol symbol, t_map_info map_info)
{
	int		i;
	int		j;
	t_bsq	bsq;

	i = 0;
	bsq.maximum = 0;
	while (i < map_info.col)
	{
		j = 0;
		while (j < map_info.row)
		{
			if (map[i + 1][j] == symbol.obstacle)
				dp[i][j] = 0;
			else if ((i == 0 || j == 0) && (map[i + 1][j] != symbol.obstacle))
				dp[i][j] = 1;
			else
				dp[i][j] = get_minimum(dp, i, j) + 1;
			if (dp[i][j] > bsq.maximum)
				get_maximum(&bsq, i, j, dp);
			j++;
		}
		i++;
	}
	print_bsq(map, symbol, bsq);
}

int	get_minimum(int **dp, int i, int j)
{
	int	minimum;

	minimum = dp[i - 1][j - 1];
	if (minimum > dp[i - 1][j])
		minimum = dp[i - 1][j];
	if (minimum > dp[i][j - 1])
		minimum = dp[i][j - 1];
	return (minimum);
}

void	get_maximum(t_bsq *bsq, int i, int j, int **dp)
{
	bsq->maximum = dp[i][j];
	bsq->col = i + 1;
	bsq->row = j;
}

void	print_bsq(char **map, t_symbol symbol, t_bsq bsq)
{
	int	i;
	int	j;

	i = bsq.col - bsq.maximum + 1;
	j = bsq.row - bsq.maximum + 1;
	while (i <= bsq.col)
	{
		j = bsq.row - bsq.maximum + 1;
		while (j <= bsq.row)
			map[i][j++] = symbol.full;
		i++;
	}
	i = 1;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
