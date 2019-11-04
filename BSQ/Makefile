# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majeande <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 23:29:27 by majeande          #+#    #+#              #
#    Updated: 2019/02/27 23:29:33 by majeande         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS_NAME = ft_print.c \
			ft_parsing.c \
			ft_solve.c \
			ft_solve2.c \
			ft_str.c \
			fts.c \
			fts2.c \
			main.c

SRCS_PATH = srcs/

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_NAME))

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		gcc -Wall -Werror -Wextra -o $(NAME) $(OBJS) $(LIB)

%.o : $(SRCS_PATH)%.c
		$(CC) $(FLAGS) -c $(SRCS)
	
clean :
		@rm -rf $(OBJS)

fclean : clean
		@rm -rf $(NAME)

fsanitize : 
		$(CC) -g3 $(CFLAGS) -fsanitize=address -o $(NAME) $(SRCS)

re : fclean all
