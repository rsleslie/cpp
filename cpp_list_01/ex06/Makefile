# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 21:24:01 by rleslie-          #+#    #+#              #
#    Updated: 2023/10/04 14:51:31 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex06
SRCS	= main.cpp Harl.cpp
CC		= c++
FLAGS	= -Wall -Wextra -Werror -g -std=c++98
OBJS	= $(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))

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