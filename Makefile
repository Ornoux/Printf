# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 16:49:07 by npatron           #+#    #+#              #
#    Updated: 2023/04/15 19:28:36 by nicolas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printstr.c ft_printnbr.c ft_printunsnbr.c ft_putchar.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
	gcc $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
		 ar -rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all