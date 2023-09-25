/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:46:25 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 22:26:42 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct s_bsq
{
	int	maximum;
	int	col;
	int	row;
}	t_bsq;

typedef struct s_symbol
{
	char	full;
	char	empty;
	char	obstacle;
	char	*num;
	int		number;
	int		error_flag;
}	t_symbol;

typedef struct s_map_info
{
	int	col;
	int	row;
	int	error_flag;
	int	check_row;
}	t_map_info;

#endif