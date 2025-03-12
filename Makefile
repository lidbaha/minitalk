# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 12:31:11 by lidbaha           #+#    #+#              #
#    Updated: 2025/03/05 18:30:40 by lidbaha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = core/server/server.c
CLIENT = core/client/client.c

LIBFT = includes/libft
PRINTF = includes/ft_printf

LIBFT_LIB = $(LIBFT)/libft.a
PRINTF_LIB = $(PRINTF)/ft_printf.a

SERVER_SRC = $(SERVER)
SERVER_OBJS = $(SERVER_SRC:.c=.o)

CLIENT_SRC = $(CLIENT)
CLIENT_OBJS = $(CLIENT_SRC:.c=.o)

OBJS = $(CLIENT_OBJS) $(SERVER_OBJS)

CC = cc
CFLAGS = -Wall -Wextra -Werror

SERVER_NAME = server
CLIENT_NAME = client


all: $(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME): $(SERVER_OBJS) $(LIBFT_LIB) $(PRINTF_LIB)
	$(CC) $(CFLAGS) $(SERVER_OBJS) $(LIBFT_LIB) $(PRINTF_LIB) -o $(SERVER_NAME)

$(CLIENT_NAME): $(CLIENT_OBJS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT_LIB) -o $(CLIENT_NAME)

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT)

$(PRINTF_LIB):
	@$(MAKE) -C $(PRINTF)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT) clean
	@$(MAKE) -C $(PRINTF) clean

fclean: clean
	@rm -f $(SERVER_NAME) $(CLIENT_NAME)
	@$(MAKE) -C $(LIBFT) fclean
	@$(MAKE) -C $(PRINTF) fclean

re: fclean all