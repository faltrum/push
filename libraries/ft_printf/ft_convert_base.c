/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:16:30 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/29 18:26:25 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_ext_convert_base(long int n, char *string, char *base)
{
	if (n < 0)
	{
		ft_add_str(string, '-');
		n = -n;
	}
	if (n >= ft_strlen(base))
	{
		ft_ext_convert_base(n / ft_strlen(base), string, base);
		ft_ext_convert_base(n % ft_strlen(base), string, base);
	}
	else
	{
		ft_add_str(string, base[n]);
	}
}

char	*ft_convert_base(int n, char *base)
{
	long int		number;
	int				length;
	char			*string;

	number = (long int) n;
	length = ft_number_size(n);
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	ft_bzero(string, (size_t)length + 1);
	ft_ext_convert_base(number, string, base);
	return (string);
}
