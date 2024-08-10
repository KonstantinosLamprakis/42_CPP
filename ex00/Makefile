# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 16:46:30 by klamprak          #+#    #+#              #
#    Updated: 2024/08/09 17:01:08 by klamprak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp BitcoinExchange.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= btc

CC		= c++

FLAGS	= -Wall -Wextra -Werror

HEADER	= BitcoinExchange.hpp

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
