CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(libft.h ft_isalpha.c)
OFILES = $(SRC:.c = .o)
NAME = libft.a

all: $(NAME) //clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES) $(NAME)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re