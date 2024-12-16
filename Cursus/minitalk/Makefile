NAME_SERVER = server
NAME_CLIENT = client
PRINTF_PATH = ft_printf
PRINTF = $(PRINTF_PATH)/libftprintf.a

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCS = -I$(PRINTF_PATH)/include

all: $(PRINTF) $(NAME_SERVER) $(NAME_CLIENT)

$(PRINTF):
	@make -C $(PRINTF_PATH)

$(NAME_SERVER): $(OBJS_SERVER)
	$(CC) $(OBJS_SERVER) -L$(PRINTF_PATH) -lftprintf -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJS_CLIENT)
	$(CC) $(OBJS_CLIENT) -L$(PRINTF_PATH) -lftprintf -o $(NAME_CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean:
	@make -C $(PRINTF_PATH) clean
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)

fclean: clean
	@make -C $(PRINTF_PATH) fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re