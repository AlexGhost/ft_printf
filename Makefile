# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acourtin <acourtin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/03 17:57:46 by acourtin          #+#    #+#              #
#    Updated: 2018/06/03 18:01:27 by acourtin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
SRC.C = ft_printf.c

SRC.O 		= 	$(SRC.C:.c=.o)

all: $(NAME)

$(NAME): $(SRC.O)
	@ar rc $(NAME) $(SRC.O)
	@ranlib $(NAME)
	@printf "\r\033[K"
	@echo "\033[33m/------------------------------------\ \\033[0m"
	@echo "\033[33m|-------- $(NAME) crée --------| \\033[0m"
	@echo "\033[33m\------------------------------------/ \\033[0m"

%.o: %.c
	@$(CC) $(CCFLAGS) -o $@ -c $< -Ilibft
	@echo "\033[36m[\t\033[0m$<\033[36m\t] \tOK\033[0m"

clean:
	@rm -rf $(SRC.O)
	@echo "\033[31mSuppression - objs\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31mSuppression - $(NAME)\033[0m"

re: fclean $(NAME)
