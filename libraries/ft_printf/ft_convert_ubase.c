/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ubase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:28:03 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/29 18:35:15 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_ext_convert_ubase(unsigned int n, char *string, char *base)
{
	if (n >= (unsigned int)ft_strlen(base))
	{
		ft_ext_convert_ubase(n / ft_strlen(base), string, base);
		ft_ext_convert_ubase(n % ft_strlen(base), string, base);
	}
	else
	{
		ft_add_str(string, base[n]);
	}
}

char	*ft_convert_ubase(unsigned int n, char *base)
{
	unsigned int		number;
	int					length;
	char				*string;

	number = (unsigned int)n;
	length = ft_number_size(n);
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	ft_bzero(string, (size_t)length + 1);
	ft_ext_convert_ubase(number, string, base);
	return (string);
}
