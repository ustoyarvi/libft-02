# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 16:32:01 by dsedlets          #+#    #+#              #
#    Updated: 2024/02/26 22:35:46 by dsedlets         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_atoi \
	ft_bzero \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memmove \
	ft_memset \
	ft_strchr \
	ft_strlcat \
	ft_strlcpy \
	ft_strlen \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_tolower \
	ft_toupper \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

# libft.a : $(list_of_objects)
#		ar -r libft.a $(list_of_objects) # "-r" means "replace or create".
#
# %.o : %.c objects
# 		cc -c $< -o $@ # "-c" means "compile without linking".

