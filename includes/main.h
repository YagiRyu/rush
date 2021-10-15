#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 1024

char	*set_number(int num);
char	**ft_split(char *str, char *charset);
void	ft_putnbr(char	**value, int num);
void	ft_putnbr_ninety_nine(void);
void	ft_putnbr_over_hundred(char **value, int num);
void	ft_putnbr_over_million(char **value, int num);
void	ft_putchar(char c);
void	ft_putstr(char **value, int num);
int		ft_strlen(char *str);
int		test_judge_numbers1(int argc, char *argv[]);
int		test_judge_numbers2(int argc, char *argv[]);

char	*g_file;
int		g_judge;

#endif