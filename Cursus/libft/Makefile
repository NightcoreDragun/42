# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 11:39:11 by irobinso          #+#    #+#              #
#    Updated: 2024/10/10 11:17:54 by irobinso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Source files and object files for the main part
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
       ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
       ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_putnbr_fd.c \
       ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_striteri.c \
       ft_strnstr.c ft_strrchr.c ft_substr.c ft_itoa.c ft_strmapi.c \
       ft_tolower.c ft_toupper.c ft_strtrim.c ft_strncmp.c ft_split.c
OBJ = $(SRCS:%.c=%.o)

# Bonus source and object files
SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
         ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS_B = $(SRCS_B:%.c=%.o)

# Library name
NAME = libft.a

# Default target - compiles the main library without bonus
all: $(NAME)

# Compile main library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Rule to compile individual .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Bonus target - includes both main and bonus object files
bonus: $(NAME) $(OBJS_B)
	ar rcs $(NAME) $(OBJ) $(OBJS_B)

# Clean target to remove object files
clean:
	rm -f $(OBJ) $(OBJS_B)
#	@echo "Cleaned object files."

# Fclean target to remove object files and the library
fclean: clean
	rm -f $(NAME)
#	@echo "Cleaned library."

# Re target to recompile everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re bonus
