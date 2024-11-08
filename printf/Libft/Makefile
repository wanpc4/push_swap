# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wwan-ab- <wwan-ab-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 12:31:41 by wwan-ab-          #+#    #+#              #
#    Updated: 2024/06/25 22:36:43 by wwan-ab-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

REMOVE = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

SOURCES = ft_itoa.c \
		  ft_putchar_fd.c \
			
OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

NAME = libft.a

LIBC = ar rcs

$(NAME) : $(OBJECTS)
		$(LIBC) $(NAME) $(OBJECTS)

all: $(NAME)

clean:
		$(REMOVE) $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
		$(REMOVE) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus