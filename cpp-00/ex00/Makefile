# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 15:31:41 by rleslie-          #+#    #+#              #
#    Updated: 2023/07/20 15:00:19 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRCS	=	megaphone.cpp
OBJS	=	$(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))
FLAGS	=	-Wall -Wextra -Werror -g -std=c++98
CC 		=	c++

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

fclean:
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
	