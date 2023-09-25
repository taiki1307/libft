/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:29:18 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:52:32 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			*(str + i) = str[i] + 32;
			i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i +1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}

// #include<stdio.h>
// int main()
// {
// 	char	a[] = "salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un";

// 	if (ft_strcapitalize(a))
// 	{
// 		printf("%s/n", a);
// 	}
// 	return (0);
// }
