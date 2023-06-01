/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:16:37 by oseivane          #+#    #+#             */
/*   Updated: 2023/01/16 14:51:15 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*b;
	unsigned char	*a;
	size_t			i;

	i = 0;
	b = (unsigned char *) dst;
	a = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}
