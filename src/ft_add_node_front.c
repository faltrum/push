/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:41:38 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/15 13:14:33 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_node_front(t_elem **lst, t_elem *new)
{
	if (new && *lst)
	{
		printf("HE entrado, joder\n");
		new->next = *lst;
		new->prev = (*lst)->prev;
		(*lst)->prev->next = new;
		*lst = new;
		(*lst)->next->prev = *lst;
	}
	else if (!*lst)
	{
		printf("HE 2, joder\n");
		*lst = new;
		(*lst)->prev = *lst;
		(*lst)->next = *lst;
		printf("%d\n", (*lst)->num);
	}
	else
		printf("No he entrado\n");
}
