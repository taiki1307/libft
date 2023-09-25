/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okanotaiki <okanotaiki@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:58:27 by taokano           #+#    #+#             */
/*   Updated: 2023/09/25 18:46:01 by okanotaiki       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0') //ヌルの前まで入る→不足する→次で不足する分ヌルで埋める
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 'A'; //Aをヌルに変える
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include<stdio.h>
// int main()
// {
// 	char	source[] = "123456";
// 	char	destination[] = "abcde";

// 	ft_strlcpy(destination, source, 5);

// 	printf("%s\n", destination);

// 	return 0;
// }
