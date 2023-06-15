/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:07:19 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/15 13:41:46 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_op_pb(t_elem **stack_a, t_elem **stack_b)
{
	t_elem	*tmp_prev;
	t_elem	*tmp_next;

	tmp_prev = (*stack_a)->prev;
	tmp_next = (*stack_a)->next;
	if ((*stack_a)->num == (*stack_a)->prev->num)
	{
		ft_add_node_front(stack_b, *stack_a);
		*stack_a = NULL;
	}
	else
	{
		tmp_prev->next = tmp_next;
		ft_add_node_front(stack_b, *stack_a);
		printf("n'umero primero %d\n", tmp_prev->next->num);
		*stack_a = tmp_next;
		(*stack_a)->prev = tmp_prev;
	}
}
