/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:19:31 by kojwatan          #+#    #+#             */
/*   Updated: 2023/08/21 17:20:45 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_length(char *str)
{
	int	length;

	length = 0;
	while ((*str))
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	char	*start;

	size = str_length(src);
	str = (char *)malloc(sizeof(char) * (size + 1));
	start = str;
	if (str == NULL)
		return (NULL);
	while (*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*source;
// 	char	*duplicate;

// 	source = "Hello, world!";
// 	duplicate = ft_strdup(source);
// 	if (duplicate != NULL)
// 	{
// 		printf("Original: %s\n", source);
// 		printf("Duplicate: %s\n", duplicate);
// 		free(duplicate); // メモリの解放を忘れずに行う
// 	}
// 	else
// 	{
// 		printf("Memory allocation error.\n");
// 	}
// 	return (0);
// }
