/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:51:24 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:54:14 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
// 	char a[] = "CHEERS"; //大文字以外で試して else に行けばいい

// 	if(ft_str_is_uppercase(a))
// 	{
// 		printf("%s\n", a);
// 	}
// 	else
// 	{
// 		printf("not only upperletter");
// 	}
// 	return 0;
// }
