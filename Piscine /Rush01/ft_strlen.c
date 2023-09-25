/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omino <omino@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:15:30 by omino             #+#    #+#             */
/*   Updated: 2023/08/17 13:39:38 by omino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

//int	main()
//{
//	char	string[] = "Hello World!";
//	printf("入力した文字: %s\n", string);
//	int	length = ft_strlen(string);
//	printf("文字の長さ: %d\n", length);
//}
