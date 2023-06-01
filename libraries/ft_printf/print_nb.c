/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:06:35 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/29 18:16:22 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nb(int n)
{
	char	*str;
	int		leng;

	str = ft_convert_base(n, "0123456789");
	if (str == NULL)
		return (-1);
	leng = print_string(str);
	free (str);
	return (leng);
}
