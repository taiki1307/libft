/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:02:42 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 12:06:20 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			nb += 2;
			return (ft_find_next_prime(nb));
		}
		i += 2;
	}
	return (nb);
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(-2));
// 	printf("%d\n", ft_find_next_prime(0));
// 	printf("%d\n", ft_find_next_prime(1));
// 	printf("%d\n", ft_find_next_prime(2));
// 	printf("%d\n", ft_find_next_prime(7));
// 	printf("%d\n", ft_find_next_prime(15));
// 	printf("%d\n", ft_find_next_prime(2147483640));
// 	return (0);
// }
