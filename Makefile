NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c prints.c puts.c specifier.c ft_itoa.c \
		ft_strdup.c ft_strlen.c hex.c itoa_unsigned.c

OBJS        = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar r $(NAME) $(OBJS)

fclean: clean
	rm -rf $(NAME)

clean:	
	rm -rf $(OBJS)

re: fclean all

.PHONY: all clean fclean re
