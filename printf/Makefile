# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 19:36:15 by gpeyre            #+#    #+#              #
#    Updated: 2023/10/17 19:38:52 by gpeyre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

RM = rm -f 

SRCS = ft_display_nbr_hex.c ft_display_nbr.c ft_display_ptr.c ft_display_unbr.c \
		ft_printf.c ft_putchar.c ft_putstr.c

OBJ = $(SRCS:.c=.o) 

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c 
		$(CC) $(CFLAGS) -I. -o $@ -c $?

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all 