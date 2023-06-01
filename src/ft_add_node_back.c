/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:12:31 by oseivane          #+#    #+#             */
/*   Updated: 2023/05/15 10:57:47 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_back(t_elem **node, t_elem *new)
{
	t_elem	*temp;

	if (node != NULL)
	{
		if ((*node) == NULL)
		{
			*node = new;
			new->prev = NULL;
		}
		else
		{
			temp = ft_last_node(*node);
			temp->next = new;
			temp->next->prev = temp;
		}
	}
}
