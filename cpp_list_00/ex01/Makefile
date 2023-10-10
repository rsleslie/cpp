# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 18:07:01 by rleslie-          #+#    #+#              #
#    Updated: 2023/10/02 21:36:30 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
SRCS	= main.cpp Contact.cpp Phonebook.cpp
OBJS	= $(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))
FLAGS	= -Wall -Wextra -Werror -g -std=c++98
CC		= c++

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
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
	