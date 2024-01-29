NAME = pipex

DIR_OBJ = obj/

DIR_BONUS_OBJ = obj_bonus/

DIR_SRC = src/

DIR_BONUS = bonus/

LIBFT = libft/libft.a

PRINTF = printf/libftprintf.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -f

SRCS =	$(wildcard $(DIR_SRC)*.c)

BONUS = $(wildcard $(DIR_BONUS)*.c)

OBJ = $(patsubst $(DIR_SRC)%.c,$(DIR_OBJ)%.o,$(SRCS))

BONUS_OBJ = $(patsubst $(DIR_BONUS)%.c,$(DIR_BONUS_OBJ)%.o,$(BONUS))

$(NAME): $(OBJ)
		make -C ./printf
		make -C ./libft
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF)

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(DIR_BONUS_OBJ):
	@mkdir -p $(DIR_BONUS_OBJ)

$(DIR_OBJ)%.o: $(DIR_SRC)%.c | $(DIR_OBJ)
	@$(CC) $(CFLAGS) -c $< -o $@

$(DIR_BONUS_OBJ)%.o: $(DIR_BONUS)%.c | $(DIR_BONUS_OBJ)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: $(BONUS_OBJ)
		make -C ./printf
		make -C ./libft
		$(CC) $(CFLAGS) -o $(NAME) $(BONUS_OBJ) $(LIBFT) $(PRINTF)

clean:
		make clean -C libft
		make clean -C printf
		rm -rf $(DIR_OBJ)
		rm -rf $(DIR_BONUS_OBJ)

fclean: clean
		$(RM) $(NAME)
		make fclean -C libft
		make fclean -C printf

re: fclean all 