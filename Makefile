CC = gcc

NAME = push_swap

LIBFT_A = libft.a

FT_PRINTF_A = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -I. -fsanitize=address -g3
#-fsanitize=address -g3
REMOVE = rm -rf

LIBFT_SOURCES = Libft/$(LIBFT_A)

FT_PRINTF_SOURCES = ft_printf/$(FT_PRINTF_A)

MAKE_SOURCES =  srcs/main/index.c \
				srcs/main/push_swap.c \
				srcs/main/radix_sort.c \
				srcs/main/simple.c \
				srcs/utils/args_checker.c \
				srcs/utils/args_splitter.c \
				srcs/utils/utils.c \
				srcs/external_libft/ft_atol.c \
				srcs/external_libft/external_libft_LL/push_swap_LL.c \
				srcs/error/error_checker_1.c \
				srcs/operation/process.c \
				srcs/operation/stack_ops_a.c \
				srcs/operation/stack_ops_b.c \
				srcs/operation/stack_ops_ab.c \

OBJ_FILES = $(MAKE_SOURCES:.c=.o)

$(NAME): $(OBJ_FILES)
		make all -C Libft
		make all -C ft_printf
		$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME) $(LIBFT_SOURCES) $(FT_PRINTF_SOURCES)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

fclean: clean
			$(REMOVE) $(NAME)
			$(REMOVE) $(LIBFT_A)
			make fclean -C Libft
			make fclean -C ft_printf

clean:
			$(REMOVE) $(OBJ_FILES)
			make clean -C Libft
			make clean -C ft_printf

re: fclean all

.PHONY: all clean fclean re