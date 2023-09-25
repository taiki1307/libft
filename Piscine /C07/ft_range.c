/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:51:38 by taokano           #+#    #+#             */
/*   Updated: 2023/08/24 11:45:23 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	num;
	int	*dest;

	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (max - min + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	num = min;
	while (num < max)
	{
		dest[i] = num;
		i++;
		num++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int	minimum = 5;
// 	int	maximum = 10;
// 	int *result = ft_range(minimum, maximum);
// 	if (result != NULL)
// 	{
// 		int i = 0;
// 		while(result[i] != '\0')
// 		{
// 			printf("%d ", result[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(result); // Don't forget to free the allocated memory
// 	}
// 	else
// 		printf("Invalid input range.\n");
// 	return 0;
// }
