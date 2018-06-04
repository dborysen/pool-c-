#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dborysen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/14 12:13:12 by dborysen          #+#    #+#              #
#    Updated: 2018/05/14 12:13:12 by dborysen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = megaphone

SRCS =  megaphone.cpp

OBJECT = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

CC = clang++

all: $(NAME)

$(NAME) : $(OBJECT)
	@$(CC) $(OBJECT) -o $(NAME)

$(OBJECT) : $(SRCS)
	@$(CC) $(FLAGS) -c $(SRCS)
	@echo "\033[37m[Compilation:\033[0m\033[36m $@\033[0m]"

norm:
	@norminette -R CheckForbiddenSourceHeader $(SRCS)

clean:
	@rm -f $(OBJECT)
	@echo "\033[32m[.o files has been deleted]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[32m[binary has been deleted]\033[0m"

re: fclean all