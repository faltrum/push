/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:15:58 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/15 13:41:36 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	write (1, "Error\n", 7);
	exit(1);
}

void	ft_print_stack(t_elem *stack)
{
	t_elem	*tmp;
	t_elem	*last;

	if (!stack)
		printf("Xavalote que no hay stack\n");
	else
	{
		last = stack->prev;
		tmp = stack;
		while (tmp)
		{
			if (tmp->prev)
				printf("el previous es: %d\n", tmp->prev->num);
			else
				printf("no hay prev: NULL\n");
			printf("num: %d\n", tmp->num);
			if (tmp->next)
				printf("el next es: %d\n\n", tmp->next->num);
			else
				printf("no hay next: NULL\n\n");
			if (tmp == last)
				break ;
			tmp = tmp->next;
		}
	}
}
