/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:58:52 by taokano           #+#    #+#             */
/*   Updated: 2023/08/18 21:24:23 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

/* #include<stdio.h>
 int main()
 {
     char dest[100] = "1234";
     char src[] = "abcd";
     unsigned int n = 6;

     printf("Initial dest: %s\n", dest);
     ft_strncat(dest, src, n);
     printf("After concatenation: %s\n", dest);

     return 0;
 }
 */
