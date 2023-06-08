/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:32:29 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/08 12:53:41 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_op_ra(t_elem **stack_a, int argc)
{
	if (argc >= 2)
	{
		(*stack_a) = (*stack_a)->next;
		printf("prueba error: primmer: %d prev: %d next: %d\n", (*stack_a)->num, (*stack_a)->prev->num, (*stack_a)->next->num);
		write (1, "ra\n", 3);
	}
	else
		printf("No se ha hecho rotate\n");
}

void	ft_op_rb(t_elem **stack_b, int argc)
{
	if (argc >= 2)
	{
		(*stack_b) = (*stack_b)->next;
		write (1, "rb\n", 3);
	}
	else
		printf("No se ha hecho rotate\n");
}

void	ft_op_rr(t_elem **stack_a, t_elem **stack_b, int argc)
{
	if (argc >= 2)
	{
		ft_op_ra(stack_a, argc);
		ft_op_rb(stack_b, argc);
		write (1, "rr\n", 3);
	}
	else
		printf("No se ha hecho rotate\n");
}
