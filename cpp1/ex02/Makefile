CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = main.cpp

NAME = reference

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $@

all:	$(NAME)

fclean:
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all fclean re