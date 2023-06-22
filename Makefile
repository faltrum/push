# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 11:03:43 by oseivane          #+#    #+#              #
#    Updated: 2023/06/22 13:18:27 by oseivane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INCLUDES = -I./includes

SORTING_DIR = sorting/

SRC_DIR = src/

OBJ_DIR = obj/

LIB_DIR = libraries/libft

FT_PRINTF_DIR = libraries/ft_printf

INCLUDES_LIB = -I./$(LIB_DIR)

INCLUDES_LIB += -I./$(FT_PRINTF_DIR)

LIB = -L./$(LIB_DIR) -lft

LIB += -L./$(FT_PRINTF_DIR) -lft

CFLAGS = -Werror -Wall -Wextra

OBJF = .cache_exists

SRC = 	push_swap \
		ft_add_node_back \
		ft_add_node_front \
		ft_display_info \
		ft_last_node \
		ft_first_node \
		ft_new_node \
		ft_check_error \
		ft_swap \
		ft_push \
		ft_rotate \
		ft_reverse \
		ft_stack_l \
		$(SORTING_DIR)ft_sort_2 \
		$(SORTING_DIR)ft_sort_3 \
		$(SORTING_DIR)ft_sort_stack \

SOURCES = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))

OBJECTS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: libraries $(NAME)

$(NAME):	$(OBJECTS)
		gcc $(CFLAGS) $(OBJECTS) $(INCLUDES) $(INCLUDES_LIB) $(LIB) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			gcc $(CFLAGS) $(INCLUDES) $(INCLUDES_LIB) -c $< -o $@
$(OBJF):
		@mkdir -p $(OBJ_DIR)
clean:
			rm -f $(OBJECTS)
	
fclean:		clean
			rm -f $(NAME)
			make -C $(LIB_DIR) fclean
			make -C $(FT_PRINTF_DIR) fclean

re:			fclean all

libraries:
			make -C $(LIB_DIR)
			make -C $(FT_PRINTF_DIR)

.PHONY:		all bonus clean fclean re libraries