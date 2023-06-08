/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:32:47 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/08 12:53:09 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_op_rra(t_elem **stack_a, int argc)
{
	if (argc >= 2)
	{
		(*stack_a) = (*stack_a)->prev;
		printf("prueba error: primmer: %d prev: %d next: %d\n", (*stack_a)->num, (*stack_a)->prev->num, (*stack_a)->next->num);
		write (1, "ra\n", 3);
	}
	else
		printf("No se ha hecho rotate\n");
}

void	ft_op_rrb(t_elem **stack_b, int argc)
{
	if (argc >= 2)
	{
		(*stack_b) = (*stack_b)->prev;
		write (1, "rb\n", 3);
	}
	else
		printf("No se ha hecho rotate\n");
}

void	ft_op_rrr(t_elem **stack_a, t_elem **stack_b, int argc)
{
	if (argc >= 2)
	{
		ft_op_rra(stack_a, argc);
		ft_op_rrb(stack_b, argc);
		write (1, "rr\n", 3);
	}
	else
		printf("No se ha hecho rotate\n");
}
