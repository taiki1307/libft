/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokano <taokano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:16:45 by kojwatan          #+#    #+#             */
/*   Updated: 2023/08/27 20:55:49 by taokano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void    recur_split_number(int n);
void    serch_value(char *key);


//print_numはsearch_value関数の代替としておいておく
void print_num(unsigned int num)
{
    printf("%d-", num);
}

void    recur_sub(int n, int divider)
{
    if(n / 10 > 10)
        recur_split_number(n / divider);
    else
        print_num(n / divider);
    print_num(divider);
    recur_split_number(n % divider);
}
void    recur_split_number(int n)
{
    if(n > 0 && n <= 20)
    {
        print_num(n);
        return;
    }else if(n / 1000000000 > 0)
        recur_sub(n, 1000000000);
    else if(n / 1000000 > 0)
        recur_sub(n, 1000000);
    else if(n / 1000 > 0)
        recur_sub(n, 1000);
    else if(n / 100 > 0)
    {
        print_num(n / 100);
        print_num(100);
        recur_split_number(n % 100);
    }
    else if(n / 10 > 0)
    {
        print_num(n / 10 * 10);
        if(n % 10 > 0)
            print_num(n % 10);
    }
    return;
}

#include<unistd.h>
int main()
{
    int i;
    
    i = 12122321;
    recur_split_number(i);
    return 0;
}