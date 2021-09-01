CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

HDRS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex02

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