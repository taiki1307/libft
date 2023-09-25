/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:11:06 by taokano           #+#    #+#             */
/*   Updated: 2023/08/26 17:59:59 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_stock_str.h"
#include <stddef.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*pp;

	pp = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (pp == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		pp[i].size = ft_strlen(av[i]);
		pp[i].str = av[i];
		pp[i].copy = ft_strdup(av[i]);
		i++;
	}
	pp[i].str = NULL;
	return (pp);
}

// #include<stdio.h>
// int	main()
// {
// 	char *p[] = {"123", "1234", "12345"};
// 	t_stock_str *par = ft_strs_to_tab(3, p);

// 	if (par == NULL) {
// 		return 1;
// 	}

// 	int i = 0;
// 	while (i < 3) {
// 		printf("Size: %d, Str: %s, Copy: %s\n",
//par[i].size, par[i].str, par[i].copy);
// 		i++;
// 	}

// 	free(par);
// 	return 0;
// }
