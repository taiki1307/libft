/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:59:37 by taokano           #+#    #+#             */
/*   Updated: 2023/08/26 19:51:41 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

// #include <stdio.h>

// int	main()
// {
// 	char a[] = "0123456789,hello";
// 	int length = ft_strlen(a);

// 	printf("%d\n", length);
// 	return 0;
// }
