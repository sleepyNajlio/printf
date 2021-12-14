
NAME = ftprintf.a

SRC = ft_printf.c ft_putbase.c ft_putchar.c ft_putstr.c ft_putnbr.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $<
	ar -rc $(NAME) $@

bonus: $(BOBJ)

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all