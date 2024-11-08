# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 10:42:51 by wwan-ab-          #+#    #+#              #
#    Updated: 2024/07/27 10:42:56 by wwan-ab-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -I.

REMOVE = rm -rf

SOURCES = ft_printf.c \
		  ft_print_hex.c \
		  ft_print_ptr.c \
		  ft_printf_utils.c \
		  ft_print_unsigned.c \

LIBFT = ./Libft/

LIBFT_A = $(LIBFT)libft.a

OBJECTS = $(SOURCES:.c=.o)

NAME = libftprintf.a

LIBC = ar rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C $(LIBFT)
	cp $(LIBFT_A) $(NAME)
	$(LIBC) $(NAME) $(OBJECTS)

%o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	make clean -C $(LIBFT)
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME) 
	$(REMOVE) $(LIBFT_A)

re: fclean all

.PHONY: all clean fclean re
