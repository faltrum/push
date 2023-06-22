/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_l.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:59:17 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/22 13:17:18 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_stack_l(t_elem *stack)
{
	t_elem	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
		if (tmp == stack)
			break ;
	}
	return (i);
}
