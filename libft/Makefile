# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 15:59:35 by gpeyre            #+#    #+#              #
#    Updated: 2023/10/03 15:59:35 by gpeyre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a #Variable contenant le nom de la bibliotheque

EXEC = go

CC = cc #Variable contenant la commande de compilation

CFLAGS = -Wall -Wextra -Werror #Variable contenant les flags a aplliquer lors de la compilation

RM = rm -f #Variable contenant la commande de suppresson des fichiers

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(SRCS:.c=.o) #Variable contenant tous les fichiers .c tarnsform�s en .o

BONUS_OBJ = $(BONUS:.c=.o)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
#Commande qui cr�e libft.a

%.o: %.c #% signifit tout les fichiers ...
		$(CC) $(CFLAGS) -I. -o $@ -c $?
#On presice ici comment les fichiers .c sont compil�s pour donner les .o dans OBJ
#-I va r�cup�rer le header chez "libft.h"
#-o $@ fait r�f�rence aux %.o de la cible
#-c $? fait r�f�rence aux %.c de la cible qui ont �t� modifi�s r�cemments

all: $(NAME) #Commande qui lance NAME et de ce fait la compilation des fichiers

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)
#Commande qui supprime les fichiers.O

fclean: clean
		$(RM) $(NAME) $(EXEC)
#Commande qui supprime la bibliotheque

re: fclean all #Commande qui supprime tout et recr�e

bonus: $(OBJ) $(BONUS_OBJ)
		ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)

exemain: 
		$(CC) -o $(EXEC) main.c -L. -lft
#-L. indique au compilateur de rechercher la biblioth�que libft.a dans le r�pertoire courant.
#-lft sp�cifie que vous voulez lier votre programme avec libft.a.