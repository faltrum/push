/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:16:30 by oseivane          #+#    #+#             */
/*   Updated: 2023/05/02 17:54:34 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*ft_ext_convert_ptr(unsigned long long n, char *string, char *base)
{
	if (n >= (unsigned long long)ft_strlen(base))
	{
		ft_ext_convert_ptr(n / ft_strlen(base), string, base);
		ft_ext_convert_ptr(n % ft_strlen(base), string, base);
	}
	else
		ft_add_str(string, base[n]);
	return (string);
}

char	*ft_convert_ptr(unsigned long long n, char *base)
{
	unsigned long long		number;
	int						length;
	char					*string;

	number = (unsigned long long)n;
	length = ft_number_size(n);
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	ft_bzero(string, (size_t)length + 1);
	ft_ext_convert_ptr(number, string, base);
	return (string);
}
