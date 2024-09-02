# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 12:23:04 by fjilaias          #+#    #+#              #
#    Updated: 2024/08/12 12:38:47 by fjilaias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c push_operations.c radix_sort.c \
	swap_operations.c rotate_operations.c \
	reverse_rotate_operations.c ps_stack_check.c \
	taking_paramers.c ft_selection_sort.c sorts.c \
	args_1_and_2.c

LBFT = -L ./libft -lft

LBPF = -L ./ft_printf -lftprintf

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(MAKE) -C ./ft_printf
	$(CC)  $(OBJS) -o $(NAME) $(LBFT) $(LBPF)

%.o: ./%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C ./libft
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ./libft fclean
	$(MAKE) -C ./ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
