/* 1 */ check(ft_atoi((e + "1").c_str()) == 1); showLeaks();
	/* 2 */ check(ft_atoi((e + "a1").c_str()) == 0); showLeaks();
	/* 3 */ check(ft_atoi((e + "--1").c_str()) == 0); showLeaks();
	/* 4 */ check(ft_atoi((e + "++1").c_str()) == 0); showLeaks();
	/* 5 */ check(ft_atoi((e + "+1").c_str()) == 1); showLeaks();
	/* 6 */ check(ft_atoi((e + "-1").c_str()) == -1); showLeaks();
	/* 7 */ check(ft_atoi((e + "0").c_str()) == 0); showLeaks();
	/* 8 */ check(ft_atoi((e + "+42lyon").c_str()) == 42); showLeaks();
	/* 9 */ check(ft_atoi((e + "+101").c_str()) == 101); showLeaks();
	/* 10 */ check(ft_atoi((e + to_string(INT_MAX)).c_str()) == INT_MAX); showLeaks();
	/* 11 */ check(ft_atoi((e + to_string(INT_MIN)).c_str()) == INT_MIN); showLeaks();
	/* 12 */ check(ft_atoi("-+42") == 0); showLeaks();
	/* 13 */ check(ft_atoi("+-42") == 0); showLeaks();
	/* 14 */ check(ft_atoi((string("+") + e + "42").c_str()) == 0); showLeaks();
	/* 15 */ check(ft_atoi((string("-") + e + "42").c_str()) == 0); showLeaks();
	/* 16 */ check(ft_atoi((string("1") + e + "42").c_str()) == 1); showLeaks();
	/* 17 */ check(ft_atoi((string("-1") + e + "42").c_str()) == -1); showLeaks();


int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (!str)
	{
		return (0);
	}
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
			sign = -1;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
