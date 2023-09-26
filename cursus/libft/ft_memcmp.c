/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:38:58 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/26 00:27:18 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;
	size_t				i;

	c_s1 = (const unsigned char *)s1;
	c_s2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	else
	{
		i = 0;
		while (i < n - 1)
		{
			if (c_s1[i] != c_s2[i])
				return (c_s1[i] - c_s2[i]);
			i++;
		}
		return (c_s1[i] - c_s2[i]);
	}
}

// #include<stdio.h>
// #include<string.h>

// int	main(void)
// {
// 	char	*test1 = "12345";
// 	char	*test2 = "13";

// 	int result = ft_memcmp(test1, test2,1);
// 	int result2 = memcmp(test1, test2, 1);

// 	int result3 = ft_memcmp(test1, test2, 10);
// 	int result4 = memcmp(test1, test2, 10);

// 	int result5 = ft_memcmp(test1, test2, 0); //ゼロ
// 	int result6 = memcmp(test1, test2, 0);

// 	// int result7 = ft_memcmp(test1, test2, -2); //負の値
// 	// int result8 = memcmp(test1, test2, -2);

// 	printf("own: %d\n", result);
// 	printf("original: %d\n\n", result2);

// 	printf("own: %d\n", result3);
// 	printf("original: %d\n\n", result4);

// 	printf("own: %d\n", result5);
// 	printf("original: %d\n\n", result6);

// 	// printf("own: %d\n", result7);
// 	// printf("original: %d\n\n", result8);

// 	return (0);
// }