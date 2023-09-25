/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:39:41 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/24 19:11:20 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c_s;
	int				i;

	c_s = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		c_s[i] = '\0';
		i++;
		n--;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "0123456789";
// 	char s2[] = "0123456789";
// 	char s3[] = "0123456789";

// 	ft_bzero(s1, 5);
// 	ft_bzero(s2+3, 3);
// 	ft_bzero(s3+5, 5);

// 	for (size_t i = 0; i < 10; i++)
// 		printf("%02X ", (unsigned char)s1[i]); //s1

// 	printf("\n");

// 	for (size_t i = 0; i < 10; i++)
// 		printf("%02X ", (unsigned char)s2[i]); //s2

// 	printf("\n");

// 	for (size_t i = 0; i < 10; i++)
// 		printf("%02X ", (unsigned char)s3[i]); //s3

// 	printf("\n");

// 	return 0;
// }
