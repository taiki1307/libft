/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:38:53 by taokano           #+#    #+#             */
/*   Updated: 2023/08/25 11:39:20 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
void	print_alpha(void)
{
	char	c = 'a';
	while(c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int main()
{
	print_alpha();
	return 0;
}