/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:01:43 by taokano           #+#    #+#             */
/*   Updated: 2023/08/28 13:05:15 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_get_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base2(int nbr, char *base, int bc)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base2((nbr / bc), base, bc);
		ft_putchar(base[-(nbr % bc)]);
		return ;
	}
	if (nbr < 0)
	{	
		if (nbr != (-2147483648 / bc))
		{
			write(1, "-", 1);
		}
		nbr = -nbr;
	}
	if (nbr >= bc)
	{
		ft_putnbr_base2(nbr / bc, base, bc);
		ft_putchar(base[nbr % bc]);
	}
	else
		ft_putchar(base[nbr % bc]);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int	bc;

	bc = ft_get_base(base);
	if (bc < 2)
		return ;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	ft_putnbr_base2(nbr, base, bc);
}

// int main()
// {
// 	int number = 10;
// 	char base[] = "poneyvif";
// 	ft_putnbr_base(number, base);
// 	ft_putchar('\n');

// 	int number2 = 255;
// 	char base2[] = "0123456789ABCDEF";
// 	ft_putnbr_base(number2, base2);
// 	ft_putchar('\n');

// 	int number3 = -2147483648;
// 	char base3[] = "01";
// 	ft_putnbr_base(number3, base3);
// 	ft_putchar('\n');

// 	int number4 = 10;
// 	char base4[] = ""; //baseが空: 何も出ない
// 	ft_putnbr_base(number4, base4);
// 	ft_putchar('\n');

// 	int number5 = 10;
// 	char base5[] = "+012345678"; //+が含まれている: 何も出ない
// 	ft_putnbr_base(number5, base5);
// 	ft_putchar('\n');

// 	int number6 = 10;
// 	char base6[] = "avcdefa"; //同じ文字aがふたつ含まれている: 何も出ない
// 	ft_putnbr_base(number6, base6);
// 	ft_putchar('\n');

// 	return 0;
// }
