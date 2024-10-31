# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apalalau <apalalau@student.42.fr>          +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 11:39:11 by apalalau          #+#    #+#              #
#    Updated: 2024/10/15 11:30:18 by apalalau         ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

# Library name
NAME = libft.a

# Compiler settings
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

# Source files and object files
SRC_DIR = src
SRCS = $(SRC_DIR)/ft_atoi.c $(SRC_DIR)/ft_bzero.c $(SRC_DIR)/ft_calloc.c \
       $(SRC_DIR)/ft_isalnum.c $(SRC_DIR)/ft_isalpha.c $(SRC_DIR)/ft_isascii.c \
       $(SRC_DIR)/ft_isdigit.c $(SRC_DIR)/ft_isprint.c $(SRC_DIR)/ft_memchr.c \
       $(SRC_DIR)/ft_memcmp.c $(SRC_DIR)/ft_memcpy.c $(SRC_DIR)/ft_memmove.c \
       $(SRC_DIR)/ft_memset.c $(SRC_DIR)/ft_putchar_fd.c $(SRC_DIR)/ft_putendl_fd.c \
       $(SRC_DIR)/ft_putstr_fd.c $(SRC_DIR)/ft_strchr.c $(SRC_DIR)/ft_strdup.c \
       $(SRC_DIR)/ft_putnbr_fd.c $(SRC_DIR)/ft_strjoin.c $(SRC_DIR)/ft_strlcat.c \
       $(SRC_DIR)/ft_strlcpy.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_striteri.c \
       $(SRC_DIR)/ft_strnstr.c $(SRC_DIR)/ft_strrchr.c $(SRC_DIR)/ft_substr.c \
       $(SRC_DIR)/ft_itoa.c $(SRC_DIR)/ft_strmapi.c $(SRC_DIR)/ft_tolower.c \
       $(SRC_DIR)/ft_toupper.c $(SRC_DIR)/ft_strtrim.c $(SRC_DIR)/ft_strncmp.c \
       $(SRC_DIR)/ft_split.c
OBJS = $(SRCS:%.c=%.o)

# Default target
all: $(NAME)

# Compile library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Rule to compile individual .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove object files
clean:
	$(RM) $(OBJS)

# Fclean target to remove object files and the library
fclean: clean
	$(RM) $(NAME)

# Re target to recompile everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
