# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtran <jtran@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 14:38:58 by jtran             #+#    #+#              #
#    Updated: 2024/08/19 14:43:42 by jtran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS =	ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \

OBJ = $(SRCS:.c=.o)

RM = rm -f

LIBFT = libft.a

all: $(LIBFT)

$(LIBFT): $(OBJ)
	ar rcs $(LIBFT) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(LIBFT)
re: fclean all
