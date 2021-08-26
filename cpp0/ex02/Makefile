CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = Account.cpp tests.cpp

HDRS = Account.hpp

OBJS = $(SRCS:.cpp=.o)

NAME = account

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
 
