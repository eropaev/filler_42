# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/21 02:38:11 by ieropaie          #+#    #+#              #
#    Updated: 2019/10/11 19:45:32 by ieropaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = includes
SRCS_P = $(shell ls src/)
SRCS = $(addprefix src/, $(SRCS_P))

CFLAGS = -Wall -Werror -Wextra -ggdb
CC = gcc

OBJ = $(SRCS:.c=.o)
RED=\033[1;31m
GREEN=\033[1;32m
NC=\033[0m

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)[✓]$(NC) Objects of $(NAME) compiled"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(GREEN)[✓]$(NC) library $(NAME) built"

%.o: %.c
	@$(CC) -c $< -o $@ -I$(HEADER) $(CFLAGS)

clean:
	@rm -Rf $(OBJ)
	@echo "$(RED)[-]$(NC) Objects of $(NAME) cleaned"

fclean: clean
	@rm -Rf $(NAME)
	@echo "$(RED)[-]$(NC) Library $(NAME) cleaned"

re: fclean all
