/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:41:38 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/08 14:30:23 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_front(t_elem **lst, t_elem *new)
{
	t_elem  *tmp;
    
    tmp = *stack_a->next;
    if (new && lst)
	{
		new->next = *lst;
		*lst = new;
        *lst->prev = me he guardado antes
	}
}
