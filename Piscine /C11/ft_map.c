/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:19:40 by taokano           #+#    #+#             */
/*   Updated: 2023/08/30 11:26:01 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*dest;

	i = 0;
	dest = (int *)malloc(sizeof(int) * length);
	if (dest == NULL)
		return (NULL);
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (tab);
}
