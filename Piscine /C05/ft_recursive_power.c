/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:28:17 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 12:09:02 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
		result = 1;
	if (power > 0)
		result = result * nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(2, 4));
// 	printf("%d\n", ft_recursive_power(-2, 5));
// 	printf("%d\n", ft_recursive_power(0, 0));
// 	printf("%d\n", ft_recursive_power(-2, -4));
// 	return (0);
// }
