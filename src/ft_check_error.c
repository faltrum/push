/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:11:54 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/01 11:27:21 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_isrep(char **strarg)
{
	int	i;
	int	j;

	i = 0;
	while (strarg[i])
	{
		printf("Checkeando si hay repeticiones: %s\n", strarg[i]);
		j = i + 1;
		while (strarg[j])
		{
			printf("-> %s\n", strarg[j]);
			if (!ft_strcmp(strarg[i], strarg[j]))
				ft_error();
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_isalpha(char *strarg)
{
	int		i;

	i = 0;
	while (strarg[i])
	{
		printf("%s\n", "Checkeando si hay letras");
		if ((strarg[i] >= 'A' && strarg[i] <= 'Z')
			|| (strarg[i] >= 'a' && strarg[i] <= 'z'))
		{
			ft_error();
			return (1);
		}
	i++;
	}
	return (strarg[i]);
}

int	ft_check_error(char **strarg)
{
	int		i;
	int		number;
	int		isalpha;
	int		isrep;

	i = 1;
	while (strarg[i])
	{
		isalpha = ft_check_isalpha(strarg[i]);
		isrep = ft_check_isrep(&strarg[i]);
		number = ft_atoi(strarg[i]);
		if (ft_strlen(strarg[i]) != ft_strlen(ft_itoa(number)))
			ft_error();
		printf("convertir en integer: %d\n", number);
		i++;
	}
	return (0);
}

int	ft_check_error2(char **strarg)
{
	int		i;
	int		number;
	int		isalpha;
	int		isrep;

	i = 0;
	while (strarg[i])
	{
		isalpha = ft_check_isalpha(strarg[i]);
		isrep = ft_check_isrep(&strarg[i]);
		number = ft_atoi(strarg[i]);
		if (ft_strlen(strarg[i]) != ft_strlen(ft_itoa(number)))
			ft_error();
		printf("convertir en integer: %d\n", number);
		i++;
	}
	return (0);
}
