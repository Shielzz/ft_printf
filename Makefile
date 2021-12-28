# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhafsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 04:01:17 by lhafsi            #+#    #+#              #
#    Updated: 2021/12/28 04:03:49 by lhafsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_get_size.c  		\
			ft_printf.c 		\
			ft_printf_utils.c	\
			ft_print_var.c 		\
			ft_print_var_hexa.c	\
			ft_putnbr_all.c


NAME	= libftprintf.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

OBJS	= ${SRCS:.c=.o}

RM	= rm -f

all:		${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean	all

.PHONY:		all clean fclean re

