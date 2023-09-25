/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:39:12 by taokano           #+#    #+#             */
/*   Updated: 2023/08/24 11:45:12 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

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
