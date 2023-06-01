/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:47:08 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/01 12:49:15 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_elem	*ft_first_node(t_elem *node)
{
	t_elem	*temp;

	temp = node;
	if (!node)
		return (NULL);
	while (temp->prev)
		temp = temp->prev;
	return (temp);
}
