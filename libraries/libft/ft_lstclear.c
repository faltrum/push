/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:20:53 by oseivane          #+#    #+#             */
/*   Updated: 2023/02/06 10:44:53 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*bor;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		bor = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = bor;
	}
	*lst = NULL;
}
