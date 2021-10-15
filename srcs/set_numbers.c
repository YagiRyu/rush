char	*set_number(int num)
{
	if (num < 30)
		return ("twenty");
	else if (num < 40)
		return ("thirty");
	else if (num < 50)
		return ("forty");
	else if (num < 60)
		return ("fifty");
	else if (num < 70)
		return ("sixty");
	else if (num < 80)
		return ("seventy");
	else if (num < 90)
		return ("eighty");
	else if (num < 100)
		return ("ninety");
	return ("");
}

char	*set_big_number(int num)
{
	if (num < 1000)
		return ("hundred");
	else if (num < 1000000)
		return ("thousand");
	else if (num < 1000000000)
		return ("million");
	else if ((long)num < 1000000000000)
		return ("billion");
	else if ((long)num < 1000000000000000)
		return ("trillion");
	else if ((long)num < 1000000000000000000)
		return ("quadrillion");
	return ("");
}

int	division(int num)
{
	if (num < 1000)
		return (100);
	else if (num < 1000000)
		return (1000);
	else if (num < 1000000000)
		return (1000000);
	return (1);
}
