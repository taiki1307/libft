/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:29:14 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/26 10:17:07 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	else if (needle[0] != '\0')
	{
		i = 0;
		while (i < len && haystack[i] != '\0')
		{
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
			}
			i++;
		}
	}
	return (NULL);
}

// #include<stdio.h>

// int main()
// 	{
// 	char	str[] = "hello! world";
// 	char	needle[] = "lo";

// 	char *res = ft_strnstr(str, needle, 12);

// 	// if (res != NULL)
// 		printf("found: %s\n", res);
// 	// else
// 	// 	printf("not found.\n");

// 	return (0);
// }
