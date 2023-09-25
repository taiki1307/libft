/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:33:27 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 18:36:33 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}

// #include <stdio.h>

// int main(void)
// {
// 	const char *str = "Hello, world!";
// 	int target = 'o';

// 	char *res = ft_strchr(str, target);

// 	if (res != NULL)

// //見つかったポインタ - 最初の文字のポインタ
// 		printf("Character '%c' found at position %ld\n", target, res - str); 
// 	else
// 		printf("Character '%c' not found in the string.\n", target);

// 	return 0;
// }