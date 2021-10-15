#include "../includes/main.h"

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ')
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (str[a] - '0') + (c * 10);
		a++;
	}
	return (c * b);
}

void	judge_number(char **value, int num)
{
	if (num == 100)
		ft_putnbr_ninety_nine();
	if (num <= 21)
		ft_putstr(value, num);
	else if (num <= 99)
		ft_putnbr(value, num);
	else
		ft_putnbr_over_hundred(value, num);
	ft_putchar('\n');
}

void	ft_split_number(char *buf, char *argv[], int argc)
{
	char	**value;
	int		num;

	if (argc == 2)
	{
		value = ft_split(buf, argv[1]);
		value = ft_split(buf, ":");
		num = ft_atoi(argv[1]);
	}
	else
	{
		value = ft_split(buf, argv[2]);
		value = ft_split(buf, ":");
		num = ft_atoi(argv[2]);
	}
	judge_number(value, num);
}

int	main(int argc, char *argv[])
{
	int		fd;
	int		rc;
	char	buf[BUF_SIZE];

	g_file = "numbers.dict";
	fd = open(g_file, O_RDONLY);
	rc = read(fd, buf, BUF_SIZE);
	if (argc < 1 || argc > 3)
		write(1, "Error\n", 6);
	else if (argc > 1 || argc < 3)
		ft_split_number(buf, argv, argc);
	close(fd);
	return (0);
}
