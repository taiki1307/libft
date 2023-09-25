/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:00:02 by taokano           #+#    #+#             */
/*   Updated: 2023/08/19 17:41:08 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include<stdio.h>
// int	main()
// {
// 	char	*test1 = "zabcaa";
// 	char	*test2 = "zabc";

// 	int result = ft_strcmp(test1, test2);

// 	if(result == 0)
// 		printf("equal\n");

// 	if (result > 0)
// 		printf("s1 is bigger");

// 	if (result < 0)
// 		printf("s2 is bigger");

// 	return (0);
// }
