# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 16:46:30 by klamprak          #+#    #+#              #
#    Updated: 2024/07/30 17:03:32 by klamprak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= main

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= iter.hpp

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

.PHONY:	clean fclean re all
