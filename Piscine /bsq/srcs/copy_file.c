/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaihori <mkaihori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:57:15 by mkaihori          #+#    #+#             */
/*   Updated: 2023/08/30 21:03:03 by mkaihori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char	*make_bigger(int *capacity, char *copied_map);
char	*my_strcpy(char *dest, char *src);

char	*copy_file(int fd)
{
	char	*copied_map;
	int		len;
	int		capacity;
	ssize_t	memory;

	len = 0;
	capacity = 8;
	memory = 1;
	copied_map = (char *)malloc(sizeof(char) * capacity);
	if (copied_map == NULL)
		return (NULL);
	while (memory > 0)
	{
		if (len == capacity - 1)
			copied_map = make_bigger(&capacity, copied_map);
		memory = read(fd, &copied_map[len], 1);
		len += memory;
		copied_map[len] = '\0';
	}
	close(fd);
	copied_map[len] = '\0';
	return (copied_map);
}

char	*make_bigger(int *capacity, char *copied_map)
{
	char	*new_copied_map;

	(*capacity) *= 2;
	new_copied_map = (char *)malloc(sizeof(char) * (*capacity));
	if (new_copied_map == NULL)
		return (NULL);
	my_strcpy(new_copied_map, copied_map);
	free(copied_map);
	copied_map = new_copied_map;
	return (copied_map);
}

char	*my_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
