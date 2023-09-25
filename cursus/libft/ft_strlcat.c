/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:35:01 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 17:32:44 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		max;
	size_t	dst_len;
	size_t	src_len;

	dst_len = my_strlen(dst);
	src_len = my_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	max = dstsize - dst_len - 1;
	while (i < max && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char dest[20] = "ABCDE";
// 	char src[] = "1234";
// 	char dest2[20] = "ABCDE";
// 	char src2[] = "1234";
// 	int x = 13;

// 	printf("dest: %u\nsrc: %u\n", my_strlen(dest), my_strlen(src));

// 	unsigned int result1 = strlcat(dest, src, x);
// 	unsigned int result2 = ft_strlcat(dest2, src2, x);

// 	printf("%s %s: %u\n", src, dest, result1);
// 	printf("%s %s: %u\n", src2, dest2, result2);

// 	return(0);
// }
