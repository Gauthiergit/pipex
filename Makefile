NAME = pipex

LIBFT = libft/libft.a

PRINTF = printf/libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -f

SRCS =	pipex.c \
		find_right_path.c \
		clear_tab.c \
		child_process.c \
		parent_process.c \
		execute.c

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
		make -C ./printf
		make -C ./libft
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF)

all: $(NAME)

clean:
		make clean -C libft
		make clean -C printf
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft
		make fclean -C printf

re: fclean all 