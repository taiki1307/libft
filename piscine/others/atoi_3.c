int my_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result * sign;
}

int main()
{
	printf("%d", atoi_2("--1234"));
	return 0;
}