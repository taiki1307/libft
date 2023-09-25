/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:37:43 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 19:48:20 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

// #include<stdio.h>
// #include<string.h>

// int	main(void)
// {
// 	char	*test1 = "12345";
// 	char	*test2 = "1234";

// 	int result = ft_strncmp(test1, test2,3);
// 	int result2 = strncmp(test1, test2, 3);

// 	int result3 = ft_strncmp(test1, test2, 5);
// 	int result4 = strncmp(test1, test2, 5);

// 	int result5 = ft_strncmp(test1, test2, 0);
// 	int result6 = strncmp(test1, test2, 0);

// 	int result7 = ft_strncmp(test1, test2, -2);
// 	int result8 = strncmp(test1, test2, -2);

// 	printf("own: %d\n", result);
// 	printf("original: %d\n\n", result2);

// 	printf("own: %d\n", result3);
// 	printf("original: %d\n\n", result4);

// 	printf("own: %d\n", result5);
// 	printf("original: %d\n\n", result6);

// 	printf("own: %d\n", result7);
// 	printf("original: %d\n\n", result8);

// 	return (0);
// }