/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:14:07 by taokano           #+#    #+#             */
/*   Updated: 2023/08/19 17:41:25 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// #define NULL __DARWIN_NULL
//  #include<stdio.h>
//  int main()
//  {
//  	char	str[] = "hello! world";
//  	char	to_find[] = "lo";

//  	char *result = ft_strstr(str, to_find);

//  	if (result != NULL)
//  		printf("Substring found: %ld\n", result - str);
//  	else
//  		printf("Substring not found.\n");

//  	return (0);
//  }