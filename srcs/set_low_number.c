#include "../includes/put_number.h"

void	set_low_number2(char **value, int num)
{
	while (num > 1000000)
		num -= 1000000;
	if (num > 1000000)
		ft_putnbr_over_thousand(value, num);
	else if (num > 100)
		ft_putnbr_over_hundred(value, num);
	else if (num > 19)
		ft_putnbr(value, num);
	else
		ft_putstr(value, num);
}

void	set_low_number(char **value, int num)
{
	if (num < 1000)
	{
		while (num > 100)
			num -= 100;
		if (num > 19)
			ft_putnbr(value, num);
		else
			ft_putstr(value, num);
	}
	else if (num < 1000000)
	{
		while (num > 1000)
			num -= 1000;
		if (num > 100)
			ft_putnbr_over_hundred(value, num);
		else if (num > 19)
			ft_putnbr(value, num);
		else
			ft_putstr(value, num);
	}
	else
	{
		set_low_number2(value, num);
	}
}
