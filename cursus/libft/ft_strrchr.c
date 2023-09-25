/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:05:09 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/25 18:36:36 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;
	int			i;

	tmp = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			tmp = &s[i];
		i++;
	}
	return ((char *)tmp);
}

// #include <stdio.h>

// int main(void)
// {
// 	const char *str = "Hello, world!";
// 	int target = 'o';

// 	char *res = ft_strrchr(str, target);

// 	if (res != NULL)

// //見つかったポインタ-最初の文字のポインタ
// 		printf("Character '%c' found at position %ld\n", target, res - str); 
// 	else
// 		printf("Character '%c' not found in the string.\n", target);

// 	return 0;
// }
