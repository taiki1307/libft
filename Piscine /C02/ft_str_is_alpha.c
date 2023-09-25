/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:53:01 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:53:27 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			return (0);
		}
		if (str[i] > 'Z' && str[i] < 'a')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char a[] = "wefwef"; //  英字以外があれば else に行けばいい

// 	if (ft_str_alpha(a))
// 	{
// 		printf("%s\n", a);
// 	}
// 	else
// 	{
// 		printf("not only alphabet\n");
// 	}
// 	return (0);
// }
