/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:55:32 by taokano           #+#    #+#             */
/*   Updated: 2023/08/31 18:08:41 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			up = 1;
		if (f(tab[i], tab[i + 1]) < 0)
			down = 1;
		i++;
	}
	if (up == 0 || down == 0)
		return (1);
	else
		return (0);
}

// int	ft_strcmp(int s1, int s2)
// {
// 	return (s1 - s2);
// }

// #include<stdio.h>
// int main()
// {
// 	int tab[] = {1, 1, 1, 0, 0};
// 	printf("%d\n", ft_is_sort(tab, 4, &ft_strcmp));
// 	return 0;
// }
