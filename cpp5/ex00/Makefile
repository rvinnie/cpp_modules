CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

HDRS = Bureaucrat.hpp

SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex00

%.o:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS) $(HDRS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
