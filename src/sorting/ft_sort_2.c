/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:23:07 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/22 14:40:36 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_2(t_elem *stack_a, int argc)
{
	int	t;
	int	b;

	t = stack_a->num;
	b = stack_a->next->num;
	if (t > b)
		ft_op_sa(stack_a, argc);
}
