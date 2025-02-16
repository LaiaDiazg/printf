NAME = libftprintf.a

SOURCES =	\
			ft_printchar.c \
			ft_printnumber.c \
			ft_putptr.c \
			ft_printf.c \

FLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	cc -c $(SOURCES) $(FLAGS) -I.

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
