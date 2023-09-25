/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:21:09 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 14:43:58 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	c_dest;
	unsigned char	c_src;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if (c_dest == c_src || n == 0)
		return (dest);
	if ()
	{
		while ();
		{
			
		}
	}
	else
	{
		while (n--)
			*c_dest++ = *c_src++;
	}
	return (dest);
}
