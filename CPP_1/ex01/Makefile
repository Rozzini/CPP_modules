# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraspors <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 00:13:45 by mraspors          #+#    #+#              #
#    Updated: 2022/12/01 00:46:01 by mraspors         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FILES = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(FILES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re