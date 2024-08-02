
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = fileops

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
