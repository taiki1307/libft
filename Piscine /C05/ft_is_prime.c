/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:39:00 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 12:00:11 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(-2));
// 	printf("%d\n", ft_is_prime(0));
// 	printf("%d\n", ft_is_prime(1));
// 	printf("%d\n", ft_is_prime(2));
// 	printf("%d\n", ft_is_prime(7));
// 	printf("%d\n", ft_is_prime(15));
// 	return (0);
// }
