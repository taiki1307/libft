/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:10:27 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 14:05:20 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	int				i;

	c_dest = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		c_dest[i] = c_src[i];
		i++;
		n--;
	}
	return (dst);
}

// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>

// int main() {
// 	char src1[] = "Hello, World!";
// 	char dest1[20];
// 	char src2[] = "This.is.a.test.";
// 	char dest2[20];
// 	char src3[] = "No.data.to.copy.";
// 	char dest3[20];
// 	int src4[] = {1, 2, 3, 4, 5};
// 	int dest4[5];

// 	ft_memcpy(dest1, src1, sizeof(src1)); //全部
// 	ft_memcpy(dest2, src2, 5); // 最初の5バイト
// 	ft_memcpy(dest3, src3, 0); // 0バイト
// 	ft_memcpy(dest4, src4, sizeof(src4)); //数値データ

// 	printf("Test1:\n");
// 	printf("src1: %s\n", src1);
// 	printf("dest1: %s\n\n", dest1);

// 	printf("Test2:\n");
// 	printf("src2: %s\n", src2);
// 	printf("dest2: %s\n\n", dest2);

// 	printf("Test3:\n");
// 	printf("src3: %s\n", src3);
// 	printf("dest3: %s\n\n", dest3);

// 	printf("Test Case 4:\n");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("src4[%d]: %d\n", i, src4[i]);
// 		printf("dest4[%d]: %d\n", i, dest4[i]);
// 	}

// 	return 0;
// }
