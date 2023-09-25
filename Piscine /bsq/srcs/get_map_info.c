/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:43:30 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 21:52:06 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include"bsq.h"

t_map_info	check_row(char **map, int col, int row, t_map_info map_info);
t_map_info	check_symbol(t_symbol symbol, t_map_info map_info);

t_map_info	get_map_info(char **map, t_symbol symbol)
{
	int			col;
	int			row;
	t_map_info	map_info;

	row = 0;
	map_info.error_flag = 0;
	col = 0;
	while (map[col] != NULL)
		col++;
	map_info.col = col - 1;
	if ((map_info.col) != symbol.number)
		map_info.error_flag = 1;
	map_info = check_row(map, col, row, map_info);
	map_info = check_symbol(symbol, map_info);
	return (map_info);
}

t_map_info	check_row(char **map, int col, int row, t_map_info map_info)
{
	int	temp_row;

	col = 0;
	temp_row = 0;
	map_info.check_row = -1;
	while (map[++col] != NULL)
	{
		row = 0;
		while (map[col][row] != '\0')
			row++;
		if (temp_row != row)
		{
			map_info.check_row += 1;
			if (map_info.check_row == 0)
				temp_row = row;
			if (map_info.check_row > 0)
			{
				map_info.error_flag += 1;
				return (map_info);
			}
		}
	}
	map_info.row = row;
	return (map_info);
}

t_map_info	check_symbol(t_symbol symbol, t_map_info map_info)
{
	if (symbol.full == symbol.empty)
		map_info.error_flag += 1;
	if (symbol.full == symbol.obstacle)
		map_info.error_flag += 1;
	if (symbol.empty == symbol.obstacle)
		map_info.error_flag += 1;
	return (map_info);
}
