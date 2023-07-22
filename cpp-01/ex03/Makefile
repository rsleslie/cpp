# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 15:05:39 by rleslie-          #+#    #+#              #
#    Updated: 2023/07/21 19:12:05 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex03
SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
CC		= c++
OBJS	= $(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))
FLAGS	= -Wall -Wextra -Werror -g -std=c++98

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

re: fclean all

.PHONY: all clean fclean re