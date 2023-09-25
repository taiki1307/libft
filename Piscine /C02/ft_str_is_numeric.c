/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:18:48 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:53:22 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main()
// {
// 	char input1[] = "1234"; //数字以外があれば else に行けばいい

// 	if (ft_str_is_numeric(input1))
// 	{
// 		printf("%s\n", input1);
// 	}
// 	else 
// 	{
// 		printf("Not only numeric\n");
// 	}
// 	return (0);
// }
