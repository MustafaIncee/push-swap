SRCS =  check_args.c \
 		count.c \
 		helper_functions.c \
		little_sort.c \
 		main.c \
 		movement_utils.c \
 		movement_utils2.c \
 		movement.c \
 		initialize_stack.c \
 		regulate.c \
		sorting.c \
 		step_sizes.c	\
		utils.c
 
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
LIBC = ar -rcs
LIBFT = ./libft/libft.a

OBJS = ${SRCS:.c=.o}

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(NAME) compiled successfully!"

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C ./libft clean
	@echo "Object files cleaned."

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C ./libft fclean
	@echo "$(NAME) and object files cleaned."

re: fclean all

$(LIBFT):
	@$(MAKE) -C ./libft

.PHONY: all clean fclean re




