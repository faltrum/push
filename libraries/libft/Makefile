# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 08:09:29 by oseivane          #+#    #+#              #
#    Updated: 2023/05/11 13:04:09 by oseivane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BONUS = .bonus

NAME 	= 	libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS		= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_itoa.c ft_striteri.c ft_putendl_fd.c \
			ft_strtrim.c ft_split.c ft_strmapi.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putnbr_fd.c ft_add_str.c ft_number_size.c \

SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS 	= 	$(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

INCLUDES = libft.h

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling: $<"

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)

bonus: $(BONUS)
$(BONUS) : $(OBJS) $(OBJSBONUS)
	ar -rcs $(NAME) $(OBJS) $(OBJSBONUS)

clean:
		rm -f $(OBJS) $(OBJSBONUS)

fclean:	clean
		rm -f $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re	