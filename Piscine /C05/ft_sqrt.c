/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:04:50 by taokano           #+#    #+#             */
/*   Updated: 2023/08/22 13:35:53 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-1));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(49));
// 	printf("%d\n", ft_sqrt(2147483647));
// 	printf("%d\n", ft_sqrt(10));
// 	return (0);
// }
