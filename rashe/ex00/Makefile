# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toueis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/23 16:53:31 by toueis            #+#    #+#              #
#    Updated: 2019/02/24 23:29:46 by toueis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = colle-2

SRC0 = srcs/colle_00.c srcs/main_rush0.c srcs/ft_putchar.c srcs/ft_atoi.c

SRC1 = srcs/colle_01.c srcs/main_rush0.c srcs/ft_putchar.c srcs/ft_atoi.c 

SRC2 = srcs/colle_02.c srcs/main_rush0.c srcs/ft_putchar.c srcs/ft_atoi.c 

SRC3 = srcs/colle_03.c srcs/main_rush0.c srcs/ft_putchar.c srcs/ft_atoi.c 

SRC4 = srcs/colle_04.c srcs/main_rush0.c srcs/ft_putchar.c srcs/ft_atoi.c 

SRC5 = srcs/main.c srcs/ft_line_column.c srcs/ft_check.c srcs/ft_for_print.c \
	srcs/ft_print01.c srcs/ft_print02.c srcs/ft_print03.c \
	srcs/ft_print04.c srcs/ft_print05.c srcs/ft_print06.c \
	srcs/ft_print07.c srcs/ft_print08.c srcs/ft_print09.c \
	srcs/ft_colle00.c srcs/ft_colle01.c srcs/ft_colle02.c \
	srcs/ft_colle03.c srcs/ft_colle04.c srcs/ft_strcmp.c \
	srcs/ft_extension00.c srcs/ft_extension01.c srcs/ft_extension02.c \
	srcs/ft_extension03.c srcs/ft_extension04.c srcs/ft_putnbr.c \
	srcs/ft_putchar.c srcs/ft_atoi.c

HEADER_DIR = includes

FLG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLG) $(SRC0) -o colle-00 -I $(HEADER_DIR)
	$(CC) $(FLG) $(SRC1) -o colle-01 -I $(HEADER_DIR)
	$(CC) $(FLG) $(SRC2) -o colle-02 -I $(HEADER_DIR)
	$(CC) $(FLG) $(SRC3) -o colle-03 -I $(HEADER_DIR)
	$(CC) $(FLG) $(SRC4) -o colle-04 -I $(HEADER_DIR)
	$(CC) $(FLG) $(SRC5) -o colle-2 -I $(HEADER_DIR)

clean:
	rm -f $(NAME) colle-00 colle-01 colle-02 colle-03 colle-04

fclean: clean

re: fclean all
