/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:33:36 by kojwatan          #+#    #+#             */
/*   Updated: 2023/08/27 18:55:07 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

char	**ft_split(char *str);
int	ft_atoi(char *str);
char	*ft_strdup(char *src);

void    putstr(char *str)
{
    if(*str == '\0')
        return;
    write(1, str, 1);
    putstr(str + 1);
}

int number_length(int nb)
{
    int length;
    
    length = 0;
    while (nb > 0)
    {
        nb /= 10;
        length++;
    }
    return length;
}

void    Error(void)
{
    putstr("Dict Error\n");
}

#include<stdio.h>

int	main(int argc, char *argv[])
{
    const char *filename = "numbers.dict";
    int flags = O_RDWR;
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    char c = '9';
    int flag;
    int number;
    
    if(argc == 3)
    {
        filename = ft_strdup(argv[1]);
        number = ft_atoi(argv[2]);
        printf("%s\n", filename);
        printf("%i\n", number);
    }
    else if(argc == 2)
    {
        number = ft_atoi(argv[1]);
        printf("%i\n", number);
        printf("%s\n", filename);
    }

    flag = 0;
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

    //recur_number_split(ft_atoi(number));
    //recurの中でsearch_value関数を呼び出す

    // while (read(fileDescriptor, buffer, 1) > 0 && length > 0)
    // {
    //     if(buffer[0] == '\n')
    //     {
    //         if(flag)
    //         {
    //             flag = 0;
    //             length--;   
    //             write(1, " ", 1);
    //         }
    //     }
    //     if((buffer[0] == c || flag == 1) && length > 0)
    //     {
    //         flag = 1;
    //         if((buffer[0] >= 'a' && buffer[0]) || (buffer[0] >= 'A' && buffer[0] <= 'Z'))
    //             write(1, buffer, 1);
    //     }
        
    // }
    
    close(fileDescriptor); 

    return 0;
}