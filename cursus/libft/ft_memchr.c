/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:35:51 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/26 00:27:06 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_s;
	size_t				i;

	c_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (c_s[i] == (unsigned char)c)
			return ((void *)(c_s + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello, World!";
// 	char target = 'W';

// 	char *res = ft_memchr(str, target, 10);

// 	if (res != NULL)
// 		printf("character '%c' positon at %ld\n", target, res - str);
// 	else
// 		printf("character '%c' hasn't been found\n", target);

// 	return 0;
// }
