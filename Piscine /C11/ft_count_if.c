/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:51:24 by taokano           #+#    #+#             */
/*   Updated: 2023/08/31 13:28:09 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	true;

	i = 0;
	true = 0;
	while (i < length)
	{
		if (f(tab[i]))
			true++;
		i++;
	}
	return (true);
}

// int	func(char *c)
// {
// 	int i = 0;
// 	while (c[i]) 
// 	{	
// 		if (c[i] == 'a')
// 			return 1;
// 		i++;
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	char *tab[] = {"123b", "456b", "789c"};
// 	printf("%d\n", ft_count_if(tab, 3, &func));
// 	return 0;
// }
