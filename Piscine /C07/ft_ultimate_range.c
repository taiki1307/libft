/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:07:16 by taokano           #+#    #+#             */
/*   Updated: 2023/08/24 11:45:27 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num;

	i = 0;
	num = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min + 1));
	if (*range == NULL)
		return (-1);
	while (num < max)
	{
		(*range)[i] = num;
		i++;
		num++;
	}
	(*range)[i] = '\0';
	return (i);
}

// #include <stdio.h>
// int ft_ultimate_range(int **range, int min, int max);

// int main()
// {
// 	int *result = NULL;
// 	int min = 10;
// 	int max = 16;

// 	int size = ft_ultimate_range(&result, min, max);

// 	if (result == NULL)
// 		printf("Range is NULL\n");
// 	else if (size == -1)
// 		printf("error\n");
// 	else
// 		printf("%d\n", size);
// 	free(result);
// 	return 0;
// }
