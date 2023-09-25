/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:57:15 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:54:30 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int	main()
// {
// 	char a[] ="cheers mate"; // /tなどを途中に入れて試して else 行けばいい

// 	if (ft_str_is_printable(a))
// 	{
// 		printf("%s\n", a);
// 	}
// 	else
// 	{
// 		printf("not only printable");
// 	}
// 	return 0;
// }
