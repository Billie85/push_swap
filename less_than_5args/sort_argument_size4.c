/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_argument_size4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:00:14 by root              #+#    #+#             */
/*   Updated: 2022/06/08 01:10:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_argument_size4(t_node *stack_a)
{
	t_node	*stack_b;
	t_node	*move_value_to_b;
	t_node	*move_value_to_a;

	stack_b = NULL;
	move_value_to_b = NULL;
	move_value_to_a = NULL;
	stack_b = first_node(-1);
	if (stack_b == NULL)
		return (free(stack_b));
	while (stack_a->next->data != 0)
		ra(&stack_a);
	move_value_to_b = pop_back(stack_a->next);
	write(1, "pb\n", 3);
	push_node(stack_b, move_value_to_b);
	sort_argument_size3(stack_a);
	move_value_to_a = pop_back(stack_b->next);
	write(1, "pa\n", 3);
	push_node(stack_a, move_value_to_a);
	list_free(&stack_b);
}
