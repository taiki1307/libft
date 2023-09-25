/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:44:20 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:53:13 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include<stdio.h>

// int main()
// {
// 	char a[] = "cheers"; //小文字以外があれば else に行けばいい

// 	if (ft_str_is_lowercase(a))
// 	{
// 		printf("%s\n", a);
// 	}
// 	else
// 	{
// 		printf("not only lowerletter\n");
// 	}
// 	return 0;
// }
