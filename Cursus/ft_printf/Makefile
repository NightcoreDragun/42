# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nightcoredragun <nightcoredragun@studen    +#+  +:+       +#+        #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 10:10:00 by nightcoredr       #+#    #+#              #
#    Updated: 2024/10/31 10:05:33 by nightcoredr      ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Source and object files for ft_printf
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

# Paths for libft and includes
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I include -I $(LIBFT_DIR)/include

# Default target
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS) $(LIBFT)

# Compile libft if it doesn't exist
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Clean object files in ft_printf
clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

# Full clean, including library files
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild everything
re: fclean all

# Prevent make from treating clean/fclean as files
.PHONY: all clean fclean re
