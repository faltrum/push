/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_may.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:02:13 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/29 18:19:41 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_may(int n)
{
	char	*str;
	int		leng;

	str = ft_convert_ubase(n, "0123456789ABCDEF");
	if (str == NULL)
		return (-1);
	leng = print_string(str);
	free (str);
	return (leng);
}
