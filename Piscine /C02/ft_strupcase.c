/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:44:15 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:52:50 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			*(str + i) = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include<stdio.h>
// int	main()
// {
// 	char a[]= "CHEERSmate1234";

// 	if (ft_strupcase(a))
// 	{
// 		printf("%s\n", a);
// 	}
// }
