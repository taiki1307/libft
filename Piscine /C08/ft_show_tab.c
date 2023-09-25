/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:14:35 by taokano           #+#    #+#             */
/*   Updated: 2023/08/26 18:01:11 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include	"ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ja_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

void	ft_putchar(int c)
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
		ft_putchar(nb % 10);
	}	
	else
	{
		ft_putchar(nb);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(ja_strlen(par[i].str));
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char *p[] = {"123", "1234", "12345"};
// 	struct s_stock_str *ppp = ft_strs_to_tab(3, p);

// 	ft_show_tab(ppp);

// 	return (0);
// }
