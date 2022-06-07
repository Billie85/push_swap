/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_argument_size5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:01:42 by root              #+#    #+#             */
/*   Updated: 2022/06/08 01:05:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	helper_sort(t_node *stack_a, t_node *stack_b, t_node *move_value_to_a)
{
	if (stack_b->next->data == 0)
		rb(&stack_b);
	sort_argument_size3(stack_a);
	write(1, "pa\n", 3);
	move_value_to_a = pop_back(stack_b->next);
	push_node(stack_a, move_value_to_a);
	write(1, "pa\n", 3);
	move_value_to_a = pop_back(stack_b->next);
	push_node(stack_a, move_value_to_a);
}

void	sort_argument_size5(t_node *stack_a)
{
	t_node	*stack_b;
	t_node	*move_value_to_b;
	t_node	*move_value_to_a;
	t_node	*tmp;

	stack_b = NULL;
	move_value_to_b = NULL;
	move_value_to_a = NULL;
	stack_b = first_node(-1);
	if (stack_b == NULL)
		return (free(stack_b));
	while (ft_lstsize(stack_a) > 3)
	{
		tmp = stack_a->next;
		if (tmp->data <= 1)
		{
			move_value_to_b = pop_back(tmp);
			write(1, "pb\n", 3);
			push_node(stack_b, move_value_to_b);
		}
		else
			ra(&stack_a);
	}
	helper_sort(stack_a, stack_b, move_value_to_a);
	list_free(&stack_b);
}
