/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omino <omino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:59:01 by omino             #+#    #+#             */
/*   Updated: 2023/08/20 23:31:43 by omino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);
int	check_view_from_left(int board[4][4], int *views);
int	check_view_from_right(int board[4][4], int *views);
int	check_view_from_top(int board[4][4], int *views);
int	check_view_from_bottom(int board[4][4], int *views);
int	check_views(int board[4][4], int *views);

void	print_board(int board[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}


int	is_valid(int board[4][4], int x, int y, int num)
{
	int	i;

	i = 0;
	while (i < 4) 
	{
		if (board[x][i] == num || board[i][y] == num) 
			return (0);
		i++;
	}
	return (1);
}

int	final_check(int pos, int board[4][4], int *views)
{
	if (pos == 16)
	{
		if (check_views(board, views))
			print_board(board);
	}
	return (0);
}

int	solve(int board[4][4], int *views, int pos)
{
	int	x;
	int	y;
	int	num;

	x = pos / 4;
	y = pos % 4;
	num = 1;
	final_check(pos, board, views);
	while (num <= 4)
	{
		if (is_valid(board, x, y, num))
		{
			board[x][y] = num;
			if (solve(board, views, pos + 1))
				return (1);
			board[x][y] = 0;
		}
		num++;
	}
	return (0);
}


int	main(int argc, char **argv)
{
	int	board[4][4] = {0};
	int	*views;
	int	i;

	i = 0;
	if (argc != 2 || ft_strlen(argv[1]) != 31) 
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = (int *)malloc(16 * sizeof(int));
	while (i < 16)
	{
		views[i] = argv[1][i * 2] - '0';
		i++;
	}
	solve(board, views, 0);
	free(views);
	return (0);
}
