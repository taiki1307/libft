/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:58:06 by taokano           #+#    #+#             */
/*   Updated: 2023/08/12 18:23:58 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	l;
	char	m;
	char	n;

	l = '0';
	while (l <= '7')
	{
		m = l + 1;
		while (m <= '8')
		{
			n = m + 1;
			while (n <= '9')
			{
				write(1, &l, 1);
				write(1, &m, 1);
				write(1, &n, 1);
				if (l != '7')
					write(1, ", ", 2);
					n++;
			}
			m++;
		}
		l++;
	}
}
