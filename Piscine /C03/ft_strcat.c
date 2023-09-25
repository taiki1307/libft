/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:59:59 by taokano           #+#    #+#             */
/*   Updated: 2023/08/19 17:41:20 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

// /* #include <stdio.h>
//  int main()
//  {
//  	char dest[100] = "1234";
//  	char src[] = "ab34 &$cd";

//  	printf("Initial dest: %s\n", dest);
//  	ft_strcat(dest, src);
//  	printf("After concatenation: %s\n", dest);

//  	return 0;
//  }
//  */
