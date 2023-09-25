/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:48:08 by kojwatan          #+#    #+#             */
/*   Updated: 2023/08/27 21:11:07 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>


int	ft_strcmp(char *s1, char *s2);

void    serch_value(int *key)
{  
    const char *filename = "numbers.dict";
    int flags = O_RDWR;
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    char c = '9';
    int i;
    char *check_key[10];
    int value_flag;

    value_flag = 0;    
    int fileDescriptor = open(filename, flags, mode);

    if (fileDescriptor == -1) {
        putstr("open error");
        return 1;
    } 
    char buffer[1];
    ssize_t bytesRead = 0;

    if (bytesRead == -1) {
        putstr("Error reading file");
        close(fileDescriptor);
        return 1;
    }

    i = 0;
    while (read(fileDescriptor, buffer, 1) > 0)
    {
        while(buffer[0] >= '0' && buffer[0] <= '9')
        {
            check_key[i] = buffer[0];
            i++;
        }
        check_key[i] = '\0';
        if(ft_atoi(check_key) - key == 0)
        {
            value_flag = 1;
        }
        else
        {
            i = 0;
            while (check_key[i])
            {
                check_key[i] = '0';
                i++;
            }
            check_key[i] = '0';
        }
        if(value_flag == 1 && buffer[0] != ' ' && buffer[0] != ':' && buffer[0] != '\n')
        {
            write(1, buffer, 1);
        }
        if(buffer[0] == '\n' && value_flag == 1)
            break;
    } 
    close(fileDescriptor); 
}