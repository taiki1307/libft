/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_symbol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:42:25 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 22:28:24 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"bsq.h"

int	my_atoi(char *str);

t_symbol	get_symbol(char **map)
{
	int			i;
	int			j;
	t_symbol	symbol;

	i = 0;
	j = 0;
	symbol.error_flag = 0;
	while (map[0][i] != '\0')
		i++;
	symbol.full = map[0][i - 1];
	symbol.obstacle = map[0][i - 2];
	symbol.empty = map[0][i - 3];
	symbol.num = (char *)malloc(sizeof(char) * (i - 3));
	while (j < i - 3)
	{
		symbol.num[j] = map[0][j];
		j++;
	}
	symbol.num[j] = '\0';
	if (symbol.num[0] == '0')
		symbol.error_flag += 1;
	symbol.number = my_atoi(symbol.num);
	return (symbol);
}

int	my_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			return (-1);
		i++;
	}
	return (result);
}
