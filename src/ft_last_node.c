/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:16:15 by oseivane          #+#    #+#             */
/*   Updated: 2023/05/08 15:06:10 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_elem	*ft_last_node(t_elem *node)
{
	t_elem	*temp;

	temp = node;
	if (!node)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
