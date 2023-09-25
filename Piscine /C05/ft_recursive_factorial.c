/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:17:00 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 11:59:02 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		result = 1;
	if (nb < 0)
		result = 0;
	if (nb > 1)
	result = result * nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int	n;

// 	n = 8;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 7;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 6;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 5;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 4;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 3;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 2;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 1;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = 0;
// 	printf("%d\n", ft_recursive_factorial(n));
// 	n = -10;
// 	printf("%d\n", ft_recursive_factorial(n));

// 	return (0);
// }
