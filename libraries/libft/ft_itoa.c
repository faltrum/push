/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:16:30 by oseivane          #+#    #+#             */
/*   Updated: 2023/01/30 10:55:29 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ext_itoa(long int n, char *string)
{
	if (n < 0)
	{
		ft_add_str(string, '-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_ext_itoa(n / 10, string);
		ft_ext_itoa(n % 10, string);
	}
	else
		ft_add_str(string, n + 48);
}

char	*ft_itoa(int n)
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
	ft_ext_itoa(number, string);
	return (string);
}

/*
int	main(void)
{
	char	*res;

	res = ft_itoa(-358);
	printf("%s", res);
}
*/
