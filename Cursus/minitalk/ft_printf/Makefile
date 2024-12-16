# Output file
NAME		= libftprintf.a

# Compiler settings
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

# Library creation and cleaning commands
AR			= ar rcs
RM			= rm -f

# Source files for ft_printf
SRC			= ft_printf.c 

# Define libft and its directory
LIBFT_DIR	= ./libft/
LIBFT		= $(LIBFT_DIR)libft.a

# Object files
OBJS		= $(SRC:.c=.o)

# Header files
HEAD		= include/ft_printf.h include/libft.h
INCLUDES	= -I include -I $(LIBFT_DIR)include

# Default target
all: $(NAME)

# Compile libft if it doesn't exist
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all

# Compile object files
%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Link libftprintf with libft
$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

# Clean object files
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

# Full clean, including libraries
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
