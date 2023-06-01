/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:07:46 by oseivane          #+#    #+#             */
/*   Updated: 2023/05/02 19:01:37 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *p)
{
	char				*str;
	char				*new;
	int					leng;

	str = ft_convert_ptr((unsigned long long)p, "0123456789abcdef");
	if (str == NULL)
	{
		free(str);
		return (-1);
	}
	new = ft_strjoin("0x", str);
	if (new == NULL)
	{
		free(new);
		if (str)
			free(str);
		return (-1);
	}
	leng = print_string(new);
	free(str);
	free(new);
	return (leng);
}
