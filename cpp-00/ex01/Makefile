# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:01:14 by rleslie-          #+#    #+#              #
#    Updated: 2023/07/18 18:18:11 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook
SRCS	=	main.cpp Contact.cpp Phonebook.cpp
OBJS	=	$(SRCS:.c=.o)
FLAGS	=	-Wall -Wextra -Werror -g -std=c++98
CC 		=	c++

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)
		
run: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)
	
clean:
	rm -f *.o
	
fclean: clean
		rm -rf $(NAME)

.PHONY: all clean fclean