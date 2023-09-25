/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:26:21 by taokano           #+#    #+#             */
/*   Updated: 2023/08/30 11:21:13 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

#include <unistd.h>
void	putchar(int c)
{
	char	a;

	a = c + '0';
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		putchar(nb % 10);
	}	
	else
	{
		putchar(nb);
	}
}

int main()
{
	int tab[] = {1, 2, 3};
	ft_foreach(tab, 3, &ft_putnbr);
	return 0;
}