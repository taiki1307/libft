/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:44:44 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 14:59:03 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		result = 1;
	if (nb < 0)
		result = 0;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int	n;

// 	n = 8;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 7;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 6;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 5;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 4;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 3;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 2;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 1;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = 0;
// 	printf("%d\n", ft_iterative_factorical(n));
// 	n = -10;
// 	printf("%d\n", ft_iterative_factorical(n));

// 	return (0);
// }
