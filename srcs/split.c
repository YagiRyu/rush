#include <stdlib.h>

int	ft_strcmp(char c, char *charset)
{
	int	i;

	i = 0;
	while (*charset)
	{
		if (c == *charset || c == '\0')
			return (0);
		charset++;
	}
	return (charset[i] - c);
}

void	into_string(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (ft_strcmp(src[i], charset) != 0)
	{
		if (src[0] == ' ')
			dest[i] = src[i + 1];
		else
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	convert(char **str_array, char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strcmp(str[i], charset) == 0)
			i++;
		else
		{
			j = 0;
			while (ft_strcmp(str[i + j], charset) != 0)
				j++;
			str_array[count] = (char *)malloc(sizeof(char *) * (j + 1));
			into_string(str_array[count], str + i, charset);
			i += j;
			count++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		num;
	int		i;

	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_strcmp(str[i + 1], charset) == 0)
		{
			if (ft_strcmp(str[i], charset) != 0)
				num++;
		}
		i++;
	}
	strs = (char **)malloc(sizeof(char *) * (num + 1));
	strs[num] = 0;
	convert(strs, str, charset);
	return (strs);
}
