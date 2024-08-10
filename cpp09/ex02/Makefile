# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 16:46:30 by klamprak          #+#    #+#              #
#    Updated: 2024/08/10 17:06:31 by klamprak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp PmergeMe.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= PmergeMe

CC		= c++

FLAGS	= -Wall -Wextra -Werror

HEADER	= PmergeMe.hpp

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
