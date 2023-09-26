/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:44:14 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/26 11:36:01 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	mark;
	int	res;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	mark = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mark = -mark;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (mark * res);
}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	char str1[] = "-+123";
// 	char str2[] = "-123";
// 	char str3[] = " +12d345";
// 	char str4[] = " \t\n\v\r12";

// 	int num1 = ft_atoi(str1);
// 	int num2 = ft_atoi(str2);
// 	int num3 = ft_atoi(str3);
// 	int num4 = ft_atoi(str4);

// 	int num5 = atoi(str1);
// 	int num6 = atoi(str2);
// 	int num7 = atoi(str3);
// 	int num8 = atoi(str4);

// 	printf("%d %d\n", num1, num5);
// 	printf("%d %d\n", num2, num6);
// 	printf("%d %d\n", num3, num7);
// 	printf("%d %d\n", num4, num8);

// 	return 0;
// }
