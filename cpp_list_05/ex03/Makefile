# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 22:42:57 by rleslie-          #+#    #+#              #
#    Updated: 2023/10/21 11:02:08 by rleslie-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex03
SRCS	= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJS	= $(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))
FLAGS	= -Wall -Wextra -Werror -g -std=c++98
CC	= c++

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
