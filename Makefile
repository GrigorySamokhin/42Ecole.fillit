# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmeizo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 14:14:51 by gmeizo            #+#    #+#              #
#    Updated: 2019/05/20 14:14:53 by gmeizo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

NAME = fillit

LNAM = libft.a

LIBF = ./src/libft

INCL = ./includes/fillit.h

SRCS = ./src

CCFL = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C $(LIBF) re
	@$(CCFL) -L $(LIBF) -lft $(SRCS)/*.c -I $(LIBF) -I $(INCL) -o $(NAME)

clean:
	@make -C $(LIBF) clean

fclean: clean
	@make -C $(LIBF) fclean
	@/bin/rm -f $(NAME)

re: fclean all
