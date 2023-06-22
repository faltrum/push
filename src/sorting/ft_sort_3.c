/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:56:18 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/22 14:38:45 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_3(t_elem *stack_a, int argc)
{
	int	t;
	int	m;
	int	b;

	t = stack_a->num;
	m = stack_a->next->num;
	b = stack_a->prev->num;
	if (m > t && m > b && b > t)
	{
		ft_op_rra(&stack_a, argc);
		ft_op_sa(stack_a, argc);
	}
	if (t > m && m < b && t < b)
		ft_op_sa(stack_a, argc);
	if (m > t && m > b && t > b)
		ft_op_rra(&stack_a, argc);
	if (t > m && t > b && m < b)
		ft_op_ra(&stack_a, argc);
	if (t > m && m > b)
	{
		ft_op_ra(&stack_a, argc);
		ft_op_sa(stack_a, argc);
	}
}
