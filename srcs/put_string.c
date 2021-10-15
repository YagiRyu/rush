#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char **value, int num)
{
	int	j;

	j = 0;
	num += 1;
	while (value[num][j] != '\n')
	{
		write(1, &value[num][j], 1);
		j++;
	}
}
