
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I./A -I./nimal.hpp -I./Cat.hpp -I./Dog.hpp -I./WrongAnimal.hpp -I./WrongCat.hpp

NAME = program

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean

