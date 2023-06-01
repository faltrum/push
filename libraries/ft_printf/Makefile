# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 10:25:50 by oseivane          #+#    #+#              #
#    Updated: 2023/04/29 18:32:24 by oseivane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

TEST = main.c

LIBTEST     = ftprintf

NAME 	= 	libftprintf.a

SRC		= 	ft_add_str.c ft_bzero.c ft_convert_base.c ft_number_size.c \
			ft_printf.c ft_strlen.c print_char.c print_hex_may.c print_hex_min.c ft_convert_ubase.c\
			print_nb.c print_ptr.c  print_string.c print_udec.c ft_strjoin.c ft_convert_ptr.c\


OBJ 	= 	$(SRC:.c=.o)

INCLUDES = libftprintf.h

CFLAGS  =  -Wall -Werror -Wextra

%.o:%.c $(INCLUDES)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling: $<"

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

all:		$(NAME)

test:	$(NAME)
		$(CC) $(TEST) -L. -l$(LIBTEST) $(CFLAGS) -I $(INCLUDES)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			all clean

.PHONY:		all bonus clean fclean re	