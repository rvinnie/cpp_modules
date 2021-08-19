CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = $(wildcard *.cpp)

HDRS = $(wildcard *.hpp) main.h

OBJS = $(SRCS:.cpp=.o)

NAME = greenbook

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(OBJS) -o $@

%.o:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
 
