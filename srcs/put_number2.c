#include "../includes/put_number.h"

void	ft_putnbr_over_million(char **value, int num)
{
	int		i;
	int		judge_num;

	i = division(num);
	judge_num = num / i;
	if (judge_num < 21)
		ft_putstr(value, judge_num);
	else if (judge_num < 100)
		ft_putnbr(value, judge_num);
	else if (judge_num < 1000)
		ft_putnbr_over_hundred(value, judge_num);
	else
		ft_putnbr_over_thousand(value, judge_num);
}
