/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:30:21 by taokano           #+#    #+#             */
/*   Updated: 2023/08/16 19:53:50 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{	
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main()
// {
// 	char	source[] = "0123456789, helloworld!";
// 	char	destination[20];

// 	ft_strcpy(destination, source);

// 	printf("%s\n", destination);
// 	return 0;
// }