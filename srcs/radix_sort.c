/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:43:47 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:23:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	helper_radix(int *argc, t_node **stack_a, t_node **stack_b, int *i)
{
	int			pb_count;
	int			j;
	t_node		*tmp;
	t_node		*moved_value;

	pb_count = 0;
	j = 0;
	tmp = NULL;
	moved_value = NULL;
	while (j != *argc - 1)
	{
		tmp = (*stack_a)->next;
		if ((tmp->data >> *i) & 1)
			ra(stack_a);
		else
		{
			write(1, "pb\n", 3);
			pb_count++;
			moved_value = pop_back(tmp);
			push_node(*stack_b, moved_value);
		}
		j++;
	}
	return (pb_count);
}

void	radix_sort(t_node *stack_a, int total_bits, int argc)
{
	int		i;
	int		pb_count;
	t_node	*stack_b;
	t_node	*retrieve_stack_b;

	stack_b = NULL;
	stack_b = first_node(-1);
	i = 0;
	while (i < total_bits)
	{
		pb_count = helper_radix(&argc, &stack_a, &stack_b, &i);
		while (pb_count > 0)
		{
			retrieve_stack_b = pop_back(stack_b->next);
			write(1, "pa\n", 3);
			push_node(stack_a, retrieve_stack_b);
			pb_count -= 1;
		}
		i++;
	}
	list_free(&stack_b);
}
