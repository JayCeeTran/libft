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

CC = gcc 
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

OBJ = $(SRCS:.c=.o)

RM = rm -f
TEST = testfile.c
LIBFT = libft.a
EXECU = a.exe

all: $(LIBFT)

$(LIBFT): $(OBJ)
	ar rcs $(LIBFT) $(OBJ)

test: $(EXECU)
	.\a.exe

$(EXECU): $(LIBFT) $(TEST)
	cc $(TEST) -L. -lft -o $(EXECU)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(LIBFT) $(EXECU)
re: fclean all
