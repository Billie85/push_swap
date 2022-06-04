/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:48:33 by root              #+#    #+#             */
/*   Updated: 2022/06/03 19:29:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*new_node_data(int argc, int *array_result)
{
	int		i;
	t_node	*stack_a;
	t_node	*new_node;

	i = 0;
	stack_a = first_node(-1);
	while (i < argc - 1)
	{
		new_node = malloc(sizeof(t_node));
		if (new_node == NULL)
			return (NULL);
		new_node->data = array_result[i];
		add_back(stack_a, new_node);
		i++;
	}
	return (stack_a);
}
