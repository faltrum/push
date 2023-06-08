/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:07:19 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/08 14:15:25 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_b(t_elem **stack_a, t_elem **stack_b)
{
	ft_add_node_front(stack_b, *stack_a);
	printf("print:\n");
	ft_print_stack(*stack_b);
	printf("fin print\n");
}
