CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = ./megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $< -o $@

%.o:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
 
