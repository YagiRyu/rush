NAME = rush-02
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/main.c
SRCS += ./srcs/set_numbers.c
SRCS += ./srcs/split.c
SRCS += ./srcs/put_number.c
SRCS += ./srcs/put_number2.c
SRCS += ./srcs/put_string.c
SRCS += ./srcs/set_low_number.c
SRCS += ./srcs/judge_number.c
INCDIR = ./includes
OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(NAME)
