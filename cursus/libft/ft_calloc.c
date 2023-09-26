/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:36:25 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/26 13:42:46 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	total;
	size_t	i;

	total = count * size;
	if (count == 0 || size == 0)
		return (NULL);
	dest = malloc(total);
	if (dest == NULL)
		return (NULL);
	if (dest != NULL)
		ft_memset(dest, 0, total);
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	size_t count = 5;
	size_t size = 2;

	int* array = (int*)ft_calloc(count, size);

	if (array != NULL)
	{
		for (size_t i = 0; i < count * size; i++)
			printf("%d", array[i]);

		free(array);
	}
	else
		printf("メモリ割り当て失敗\n");

	return (0);
}
