/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:32:56 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/22 13:20:08 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_stack(t_elem *stack, int argc)
{
	t_elem	*stack_a;
	int		i;

	i = 0;
	stack_a = stack;
	if (ft_stack_l(stack_a) == 2)
		ft_sort_2(stack_a, argc);
	if (ft_stack_l(stack_a) == 3)
		ft_sort_3(stack_a, argc);
	/*if (ft_stack_l(stack_a) == 5)
		ft_sort_5(stack_a, argc);
	if (ft_stack_l(stack_a) > 5 && ft_stack_l(stack_a) <= 100)
		ft_sort_100(stack_a, argc);
	if (ft_stack_l(stack_a) > 100 && ft_stack_l(stack_a) <= 500)
		ft_sort_100(stack_a, argc);*/
}
