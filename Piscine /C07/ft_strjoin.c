/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:24:18 by taokano           #+#    #+#             */
/*   Updated: 2023/08/28 14:12:21 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

void	extrafunc(char **strs, char *dest, char *sep, int size)
{
	int	j;
	int	i;
	int	di;

	i = 0;
	j = 0;
	di = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[di++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				dest[di++] = sep[j++];
		}
		i++;
	}
	dest[di] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*dest;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]);
		i++;
	}
	if (size == 0)
		return (malloc(1));
	dest = (char *)malloc(sizeof(char)
			* (count + (ft_strlen(sep)) * (size - 1) + 1));
	extrafunc(strs, dest, sep, size);
	return (dest);
}

// #include <stdio.h>
// int main() {
// 	char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
// 	char *sep = " && ";
// 	int size = sizeof(strs) / sizeof(strs[0]);

// 	char *result = ft_strjoin(size, strs, sep);

// 	if (result != NULL) {
// 		printf("Concatenated string: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Memory allocation failed\n");
// 	}

// 	return 0;
// }
