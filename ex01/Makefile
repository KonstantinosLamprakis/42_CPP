
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp Contact.cpp main.cpp

INCLUDES = -I./PhoneBook.hpp -I./Contact.hpp -I./header.hpp

OBJS = $(SRCS:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -o $@

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
