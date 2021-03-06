# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taehykim <taehykim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 09:36:50 by taehykim          #+#    #+#              #
#    Updated: 2022/03/30 19:56:38 by taehykim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft
LIBFT_a = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
RM = rm -f
AR = ar
CRS = crs

SRCS = ft_dec_to.c ft_format1.c ft_format2.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
		make all -C $(LIBFT)/
		cp $(LIBFT)/$(LIBFT_a) $(NAME)
		$(AR) $(CRS) $@ $(OBJS)

clean:
		$(RM) $(OBJS)
		make clean -C $(LIBFT)

fclean: clean
		$(RM) $(NAME)
		make fclean -C $(LIBFT)

re: fclean all

.PHONY: fclean all clean re
