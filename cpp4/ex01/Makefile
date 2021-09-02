CC = g++ #clang

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

HDRS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex01

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