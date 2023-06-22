/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:32:47 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/22 13:28:46 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_op_rra(t_elem **stack_a, int argc)
{
	if (argc >= 2)
	{
		(*stack_a) = (*stack_a)->prev;
		printf("prueba error: primmer: %d next: %d prev: %d\n", (*stack_a)->num, (*stack_a)->next->num, (*stack_a)->prev->num);
		write (1, "rra\n", 4);
	}
	else
		printf("No se ha hecho rotate\n");
}

void	ft_op_rrb(t_elem **stack_b, int argc)
{
	if (argc >= 2)
	{
		(*stack_b) = (*stack_b)->prev;
		write (1, "rrb\n", 4);
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
		write (1, "rrr\n", 4);
	}
	else
		printf("No se ha hecho rotate\n");
}
