/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:20:19 by oseivane          #+#    #+#             */
/*   Updated: 2023/02/03 11:41:26 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	length;
	t_list			*temp;

	temp = lst;
	length = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	return (length);
}
