/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:12:31 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/08 13:44:42 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_back(t_elem **lst, t_elem *new)
{
	t_elem	*temp;

	if (lst != NULL)
	{
		if ((*lst) == NULL)
		{
			*lst = new;
			new->prev = NULL;
		}
		else
		{
			temp = ft_last_node(*lst);
			temp->next = new;
			temp->next->prev = temp;
		}
	}
}
