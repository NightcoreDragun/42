# Variables
NAME = libftprintf.a
LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

# Source files for libftprintf (ajoute ici tous les fichiers .c pour ft_printf)
SRCS = ft_printf.c  # Et tout autre fichier nécessaire pour ft_printf

# Source files pour libft (que tu as déjà)
LIBFT_SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
       ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
       ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
       ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_putnbr_fd.c \
       ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_striteri.c \
       ft_strnstr.c ft_strrchr.c ft_substr.c ft_itoa.c ft_strmapi.c \
       ft_tolower.c ft_toupper.c ft_strtrim.c ft_strncmp.c ft_split.c

OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Règles
all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)  # Compile la libft
	cp $(LIBFT) ./  # Copie libft.a dans le répertoire courant
	ar rcs $(NAME) $(OBJS) libft.a  # Combine les objets de ft_printf et libft.a

clean:
	@make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	rm -f $(NAME) libft.a

re: fclean all
