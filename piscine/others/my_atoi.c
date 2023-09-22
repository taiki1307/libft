#include <stddef.h>
#include <unistd.h>

int	my_atoi(char *str)
{
	int result = 0;
	int i = 0;
	int mark = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			mark = mark * -1;
		}
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		else
			return -1;
		i++;
	}
	return(mark * result);
}

void my_putchar(int c)
{
	char a = c + '0';
	write(1, &a, 1);
}

void my_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		my_putnbr(nb / 10);
		my_putchar(nb % 10);
	}
	else
		my_putchar(nb);
}

#include<stdio.h>
int main(int argc, char *argv[])
{
	int i = 1;
	if (argc < 2)
		return 0;
	while (argv[i] != NULL)
	{
		// printf("%d", my_atoi(argv[i]));
		my_putnbr(my_atoi(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return 0;
}