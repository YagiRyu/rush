#include "../includes/put_number.h"

void	ft_putnbr(char	**value, int num)
{
	char	*string_number;
	int		len;
	int		judge_num;

	judge_num = num % 10;
	string_number = set_number(num);
	len = ft_strlen(string_number);
	write(1, string_number, len);
	if (judge_num != 0)
	{
		ft_putchar(' ');
		ft_putstr(value, judge_num);
	}
}

void	ft_putnbr_ninety_nine(void)
{
	char	*last_number;

	last_number = "ninety nine";
	write(1, last_number, ft_strlen(last_number));
}

void	ft_putnbr_over_thousand(char **value, int num)
{
	int		i;
	int		judge_num;

	i = division(num);
	judge_num = num / i;
	if (judge_num < 21)
		ft_putnbr(value, judge_num);
	else if (judge_num < 100)
		ft_putnbr(value, judge_num);
	else
		ft_putnbr_over_hundred(value, judge_num);
}

void	ft_putnbr_over_hundred(char **value, int num)
{
	char	*first;
	int		len;
	int		i;
	int		judge_num;

	if (num > 1000000)
		ft_putnbr_over_million(value, num);
	else if (num > 1000)
		ft_putnbr_over_thousand(value, num);
	else
	{
		i = division(num);
		judge_num = num / i;
		ft_putstr(value, judge_num);
	}
	ft_putchar(' ');
	first = set_big_number(num);
	len = ft_strlen(first);
	write(1, first, len);
	ft_putchar(' ');
	set_low_number(value, num);
}
