/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:03:55 by oseivane          #+#    #+#             */
/*   Updated: 2023/06/08 14:14:02 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	t_elem	*stack_a;
	t_elem	*stack_b;
	t_elem	*new_node;
	t_elem	*tmp;
	t_elem	*last;
	int		num;
	char	**strarg;

	stack_a = NULL;
	stack_b = NULL;
	tmp = NULL;
	i = 1;
	j = 0;
	strarg = argv;
	printf("Argc: %d\n", argc);
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		strarg[j] = ft_strdup(strarg[i]);
		strarg = ft_split(strarg[j], ' ');
		ft_check_error2(strarg);
		while (strarg[j])
		{
			num = ft_atoi(strarg[j]);
			new_node = ft_new_node(num);
			ft_add_node_back(&stack_a, new_node);
			printf("new node: %d\n", new_node->num);
			j++;
		}
	}
	else if (argc > 2)
	{
		ft_check_error(strarg);
		printf("\n\n\nErrores y controles inicales checkeados\n\n\n");
		printf("Introduciendo numeros en Stack a\n");
		while (strarg[i])
		{
			num = ft_atoi(strarg[i]);
			new_node = ft_new_node(num);
			ft_add_node_back(&stack_a, new_node);
			printf("new node: %d\n", new_node->num);
			i++;
		}
	}

	last = ft_last_node(stack_a);
	stack_a->prev = last;
	last->next = stack_a;
	printf("Empieza las operaciones en los Stacks\n");
	//ft_op_sa(stack_a, argc);
	//ft_op_pb(stack_b, stack_a);
	//ft_op_sb(stack_b, argc);
	//ft_op_ss(stack_a, stack_b, argc);
	//ft_op_ra(&stack_a, argc);
	//ft_op_rra(&stack_a, argc);
	ft_push_b(&stack_a, &stack_b);
	
}
