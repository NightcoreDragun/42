# Nom de la librairie
NAME = libft.a

# Répertoire des fichiers sources
SRC_DIR = lib/

# Prendre automatiquement tous les fichiers .c dans lib/
SRC = $(wildcard $(SRC_DIR)*.c)

# Fichiers objets
OBJ = $(SRC:.c=.o)

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Compilateur
CC = gcc

# Commande ar pour créer la librairie
AR = ar rcs

# Règle par défaut
all: $(NAME)

# Compilation de la librairie
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage des fichiers objets et de la librairie
fclean: clean
	rm -f $(NAME)

# Reconstruire tout
re: fclean all
