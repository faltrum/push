/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:30:39 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/22 13:40:41 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_op_s(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void	ft_op_sa(t_elem *stack_a, int argc)
{
	if (argc >= 2)
	{
		ft_op_s(&stack_a->num, &stack_a->next->num);
		printf("prueba error: primmer: %d next: %d prev: %d\n", stack_a->num, stack_a->next->num, stack_a->prev->num);
		write (1, "sa\n", 3);
	}
}

void	ft_op_sb(t_elem *stack_b, int argc)
{
	if (argc >= 2)
	{
		ft_op_s(&stack_b->num, &stack_b->next->num);
		write (1, "sb\n", 3);
	}
}

void	ft_op_ss(t_elem *stack_a, t_elem *stack_b, int argc)
{
	if (argc >= 2)
	{
		ft_op_sa(stack_a, argc);
		ft_op_sb(stack_b, argc);
		write (1, "ss\n", 3);
	}
}
