/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:22:00 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:52:37 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			*(str + i) = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include<stdio.h>
// int	main()
// {
// 	char a[]= "CHEERSmate1234";

// 	if (ft_strlowcase(a))
// 	{
// 		printf("%s\n", a);
// 	}
// }
