
SRCS	= main.cpp Serializer.cpp Data.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= main

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= Serializer.hpp Data.hpp

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY:	clean fclean re bonus bench bclean
