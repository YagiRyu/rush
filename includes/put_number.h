#ifndef PUT_NUMBER_H
# define PUT_NUMBER_H

# include <unistd.h>

int		ft_strlen(char *str);
char	*set_number(int num);
char	*set_big_number(int num);
char	**ft_split(char *str, char *charset);
int		division(int num);
void	ft_putchar(char c);
void	ft_putstr(char **value, int num);
void	ft_putnbr_over_hundred(char **value, int num);
void	ft_putnbr_over_thousand(char **value, int num);
void	ft_putnbr_over_million(char **value, int num);
void	ft_putnbr(char	**value, int num);
void	set_low_number(char **value, int num);
void	ft_putnbr_ninety_nine(void);
void	set_low_number(char **value, int num);

#endif