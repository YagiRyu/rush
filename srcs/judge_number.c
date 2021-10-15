#include "../includes/main.h"

int	test_judge_numbers1(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		if (argv[1][0] == '\0')
			return (0);
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
				return (0);
			i++;
		}
	}
	else
		test_judge_numbers2(argc, argv);
	return (1);
}

int	test_judge_numbers2(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		if (argv[2][0] == '\0')
			return (0);
		while (argv[2][i] != '\0')
		{
			if (argv[2][i] < '0' || argv[2][i] > '9')
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}
