/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:03:22 by taokano           #+#    #+#             */
/*   Updated: 2023/08/27 18:08:02 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	mark;
	int	number;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	mark = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		mark = mark * -1;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (mark * number);
}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	char a[] = "";
// 	int	b = ft_atoi(a);

// 	printf("%d\n", b);

// 	char a2[] = "";
// 	int b2 = atoi(a2);

// 	printf("%d\n", b2);
// 	return 0;
// }
