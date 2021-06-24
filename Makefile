# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faysal <faysal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/21 12:50:16 by fbougama          #+#    #+#              #
#    Updated: 2021/06/24 02:37:07 by faysal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	srcs/check_input.c srcs/double_list.c srcs/main.c \
			srcs/stacks_operators.c

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -g

RM		=	rm -f

LIB		=	libft.a

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(LIB)
		$(CC) -o $(NAME) $(CFLAGS)  $(OBJS) $(LIB)

$(LIB)	:
	cd libft && make bonus && make clean && mv libft.a .. 

%.o		:	%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean	:
	$(RM) *.o */*.o $(LIB)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re bonus