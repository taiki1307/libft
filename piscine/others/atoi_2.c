#include<stdio.h>

int atoi_2(char *str)
{
	int i = 0;
	int result = 0;
	int mark = 1;
	if (str[0] == '-')
		mark = -mark;
	while (str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (mark * result);
}

int main()
{
	printf("%d", atoi_2("-1234"));
	return 0;
}