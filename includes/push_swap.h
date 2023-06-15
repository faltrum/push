/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:23:02 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/15 11:00:46 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_elem
{
	int				num;
	struct s_elem	*prev;
	struct s_elem	*next;
}t_elem;

int		main(int argc, char **argv);
int		ft_check_isrep(char **argv);
int		ft_check_isalpha(char *argv);
int		ft_check_error(char **argv);
int		ft_check_error2(char **strarg);
t_elem	*ft_new_node(int num);
t_elem	*ft_first_node(t_elem *node);
t_elem	*ft_last_node(t_elem *node);
void	ft_add_node_back(t_elem **elem, t_elem *new);
void	ft_add_node_front(t_elem **lst, t_elem *new);
void	ft_error(void);
void	ft_print_stack(t_elem *stack_a);
void	ft_op_s(int *num1, int *num2);
void	ft_op_sa(t_elem *stack_a, int argc);
void	ft_op_sb(t_elem *stack_b, int argc);
void	ft_op_ss(t_elem *stack_a, t_elem *stack_b, int argc);
void	ft_op_pb(t_elem **stack_a, t_elem **stack_b);
void	ft_op_ra(t_elem **stack_a, int argc);
void	ft_op_rb(t_elem **stack_b, int argc);
void	ft_op_rr(t_elem **stack_a, t_elem **stack_b, int argc);
void	ft_op_rra(t_elem **stack_a, int argc);
void	ft_op_rrb(t_elem **stack_b, int argc);
void	ft_op_rrr(t_elem **stack_a, t_elem **stack_b, int argc);


#endif