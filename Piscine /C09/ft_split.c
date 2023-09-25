/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:46:23 by taokano           #+#    #+#             */
/*   Updated: 2023/08/29 14:07:27 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_charset(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	get_size(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (!is_charset(str[i], charset) && str[i] != '\0')
		{
			if (!is_charset(str[i], charset)
				&& ((is_charset(str[i + 1], charset)) || (str[i + 1] == '\0')))
				j++;
			i++;
		}
		i++;
	}
	return (j);
}

char	*ft_strdup(char *src, int n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**extrafunc(char *str, char *charset, char **dest)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (str[i])
	{
		start = i;
		while (!is_charset(str[i], charset) && str[i] != '\0')
		{
			if (!is_charset(str[i], charset)
				&& ((is_charset(str[i + 1], charset)) || (str[i + 1] == '\0')))
			{
				dest[j] = ft_strdup(&str[start], i - start);
				j++;
			}
			i++;
		}
		i++;
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**dest;

	size = get_size(str, charset);
	dest = (char **)malloc(sizeof(char *) * size + 1);
	if (dest == NULL)
		return (NULL);
	dest = extrafunc(str, charset, dest);
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = {",,hello!world  , this is a! test, ,"};
// 	char *charset = {",,!!"};
// 	char **result = ft_split(str, charset);
// 	int	i;

// 	if (result != NULL)
// 	{
// 		i = 0;
// 		while (result[i] != NULL)
// 		{
// 			printf("%s: %d\n", result[i], i);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
// 	return (0);
// }
