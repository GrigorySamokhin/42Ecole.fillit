# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwiegand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 19:33:20 by hwiegand          #+#    #+#              #
#    Updated: 2019/03/30 14:10:35 by hwiegand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS=*.c
OBJECTS=*.o
INCLUDES=./

all: $(NAME)

$(NAME) : $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all