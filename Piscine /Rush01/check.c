/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omino <omino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:55:32 by omino             #+#    #+#             */
/*   Updated: 2023/08/20 23:39:34 by omino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_from_left(int board[4][4], int *views)
{
	int	i;
	int	j;
	int	max;
	int	count;

	while (i < 4)
	{
		max = 0;
		count = 0;
		j = 0;
		while (j < 4)
		{
			if (board[i][j] > max)
			{
				max = board[i][j];
				count++;
			}
			j++;
		}
		if (count != views[8 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_view_from_right(int board[4][4], int *views)
{
	int	i;
	int	j;
	int	max;
	int	count;

	i = 0;
	while (i < 4)
	{
		max = 0;
		count = 0;
		j = 3;
		while (j >= 0)
		{
			if (board[i][j] > max)
			{
				max = board[i][j];
				count++;
			}
			j--;
		}
		if (count != views[12 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_view_from_top(int board[4][4], int *views)
{
	int	i;
	int	j;
	int	max;
	int	count;

	while (i < 4)
	{
	max = 0;
	count = 0;
		j = 0;
		while (j < 4)
		{
			if (board[j][i] > max)
			{
				max = board[j][i];
				count++;
			}
			j++;
		}
		if (count != views[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_view_from_bottom(int board[4][4], int *views)
{
	int	i;
	int	j;
	int	max;
	int	count;

	while (i < 4)
	{
		max = 0;
		count = 0;
		j = 3;
		while (j >= 0)
		{
			if (board[j][i] > max)
			{
				max = board[j][i];
				count++;
			}
			j--;
		}
		if (count != views[4 + i]) return 0;
		i++;
	}
	return 1;
}

int check_views(int board[4][4], int *views) {
    int i = 0;
    while (i < 4) {
        if (!check_view_from_left(board, views)) 
			return 0;
    	if (!check_view_from_right(board, views)) 
			return 0;
    	if (!check_view_from_top(board, views)) 
			return 0;
    	if (!check_view_from_bottom(board, views)) 
			return 0;
        i++;
    }
    return 1;
}
