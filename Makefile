# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makfile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabibi- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 15:17:11 by mhabibi-          #+#    #+#              #
#    Updated: 2021/12/21 15:18:49 by mhabibi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 = libftprintf.a

SRCS    = 	ft_hexup.c \
        	ft_hexlow.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_printf.c \
			ft_putchar.c \
			ft_unsidec.c \
        	
OBJS	= $(SRCS:.c=.o)

CC		= cc

FLGS	= -Wall -Wextra -Werror

LIB1	= ar -rc	

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)

.c.o:
			$(CC) $(FLGS) -c $(SRCS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
