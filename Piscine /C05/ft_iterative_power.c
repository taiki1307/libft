/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:29:41 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 12:08:43 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(-2, 5));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(-2, -4));
// 	return (0);
// }