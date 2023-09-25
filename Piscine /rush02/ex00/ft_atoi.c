/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:12:43 by kojwatan          #+#    #+#             */
/*   Updated: 2023/08/27 12:54:11 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
		{
			i *= -1;
		}
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * i);
}
