/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:01:40 by okanotaiki        #+#    #+#             */
/*   Updated: 2023/09/24 17:24:44 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	source[] = "hello! world";
// 	char	*duplicate = ft_strdup(source);
// 	if (duplicate != NULL)
// 	{
// 		printf("original : %s\n", source);
// 		printf("DUPLICATE: %s\n", duplicate);
// 		free(duplicate);
// 	}
// 	else
// 		printf("error\n");
// 		return (0);
// }