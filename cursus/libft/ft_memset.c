/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:53:07 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 19:41:46 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	c_ch;
	unsigned char	*c_buf;
	int				i;

	c_ch = (unsigned char)ch;
	c_buf = (unsigned char *)buf;
	i = 0;
	while (n > 0)
	{
		c_buf[i] = c_ch;
		i++;
		n--;
	}
	return (buf);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	char buf1[] = "ABCDEFGHIJK";
// 	char buf2[] = "ABCDEFGHIJK";
// 	char buf3[] = "AB";

// 	ft_memset(buf1,'1',3);
// 	ft_memset(buf2+2,'1',3);
// 	ft_memset(buf3+2,'1',3);

// 	printf("%s\n",buf1);
// 	printf("%s\n",buf2);
// 	printf("%s\n",buf3);

// 	return 0;
// }