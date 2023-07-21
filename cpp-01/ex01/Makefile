# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 15:43:07 by rleslie-          #+#    #+#              #
#    Updated: 2023/07/20 19:43:43 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex01
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp
OBJS	= $(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))
FLAGS	= -Wall -Wextra -Werror -g -std=c++98
CC 		= c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

objects:
	mkdir -p objects

objects/%.o: %.cpp | objects
		$(CC) $(FLAGS) -c $< -o $@
		
run: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)
	
clean:
	rm -rf objects
	
fclean: clean
	rm -rf $(NAME)

re: fclean re

.PHONY: all fclean clean re