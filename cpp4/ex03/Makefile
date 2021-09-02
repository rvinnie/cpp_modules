CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

HDRS =

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex03

$(NAME):	$(OBJS) $(HDRS)
	$(CC) $(OBJS) -o $@

%.o:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@ 

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re