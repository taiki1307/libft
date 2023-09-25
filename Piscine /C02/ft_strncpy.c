/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:00:27 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:53:34 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0') //ヌルの前まで入る→不足する→次で不足する分ヌルで埋める
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '5'; //'\0'に直す
		i++;
	}
	return (dest);
}

// #include<stdio.h>
// int	main()
// {
// 	char	source[] = "123456";
// 	char	destination[20];

// 	ft_strncpy(destination, source, 5);

// 	printf("%s\n", destination);
// 	return 0;
// }
