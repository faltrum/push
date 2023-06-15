/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:12:31 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/15 11:13:24 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_back(t_elem **lst, t_elem *new)
{
	t_elem	*tmp;

	if (lst != NULL)
	{
		if ((*lst) == NULL)
		{
			*lst = new;
			new->prev = NULL;
		}
		else
		{
			tmp = ft_last_node(*lst);
			tmp->next = new;
			tmp->next->prev = tmp;
		}
	}
}
