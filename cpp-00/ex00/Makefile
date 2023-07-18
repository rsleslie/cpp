# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 15:31:41 by rleslie-          #+#    #+#              #
#    Updated: 2023/07/16 18:02:55 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.c=.o)
FLAGS	=	-Wall -Wextra -Werror -g -std=c++98
CC 		=	c++

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)

run: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

clean: 
		rm -rf *.o

fclean:
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
	