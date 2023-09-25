/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:46:55 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 22:18:44 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

void	print_error(void);
void	solve_square(int fd);
void	main2(int args, int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	int	args;

	args = 0;
	if (argc == 1)
		solve_square(0);
	else if (argc > 1)
	{
		main2(args, argc, argv);
	}
	else
	{
		print_error();
		write(1, "\n", 1);
	}
	return (0);
}

void	main2(int args, int argc, char *argv[])
{
	int	fd;

	while (++args < argc)
	{
		fd = open(argv[args], O_RDONLY);
		if (fd == -1)
		{
			print_error();
			return ;
		}
		solve_square(fd);
		write(1, "\n", 1);
	}
}
