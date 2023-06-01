/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:44:22 by oseivane          #+#    #+#             */
/*   Updated: 2023/04/29 18:10:39 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	tipo_variable(va_list args, char conv)
{
	if (conv == 'c')
		return (print_char(va_arg(args, int)));
	else if (conv == 's')
		return (print_string(va_arg(args, char *)));
	else if (conv == 'd' || conv == 'i')
		return (print_nb(va_arg(args, int)));
	else if (conv == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (conv == 'u')
		return (print_udec(va_arg(args, unsigned int)));
	else if (conv == 'x')
		return (print_hex_min(va_arg(args, int)));
	else if (conv == 'X')
		return (print_hex_may(va_arg(args, int)));
	else if (conv == '%')
		return (write(1, &conv, 1));
	return (0);
}

int	l_str(const char *string, va_list args, int leng)
{
	int	i;
	int	check;

	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			check = tipo_variable(args, string[i + 1]);
			if (check != -1)
				leng += check;
			else
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &string[i], 1) != 1)
				return (-1);
			leng++;
		}
		i++;
	}
	return (leng);
}

int	ft_printf(const char *string, ...)
{
	int		leng;
	va_list	args;

	leng = 0;
	va_start(args, string);
	leng = l_str(string, args, leng);
	va_end(args);
	return (leng);
}
