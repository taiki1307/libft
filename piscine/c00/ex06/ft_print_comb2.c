/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 21:57:44 by taokano           #+#    #+#             */
/*   Updated: 2023/08/12 19:09:41 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_left(int left)
{
	char	first_number_of_left;
	char	second_number_of_left;

	first_number_of_left = 48 + left / 10;
	second_number_of_left = 48 + left % 10;
	write(1, &first_number_of_left, 1);
	write(1, &second_number_of_left, 1);
}

void	ft_print_right(int right)
{
	char	first_number_of_right;
	char	second_number_of_right;

	first_number_of_right = 48 + right / 10;
	second_number_of_right = 48 + right % 10;
	write(1, &first_number_of_right, 1);
	write(1, &second_number_of_right, 1);
}

void	ft_print_comb2(void)
	{
	int	left;
	int	right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_print_left(left);
			write(1, " ", 1);
			ft_print_right(right);
			if (left != 98)
				write(1, ", ", 2);
			right++;
		}
		left++;
	}
}
