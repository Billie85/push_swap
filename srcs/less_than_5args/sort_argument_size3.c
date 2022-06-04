/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_argument_size3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:00:00 by root              #+#    #+#             */
/*   Updated: 2022/06/02 09:21:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_argument_size3(t_node *stack_a)
{
	int	a_1;
	int	a_2;
	int	a_3;

	a_1 = stack_a->next->data;
	a_2 = stack_a->next->next->data;
	a_3 = stack_a->next->next->next->data;
	if (a_1 < a_2 && a_2 > a_3 && a_1 < a_3)
	{
		sa(stack_a);
		ra(&stack_a);
	}
	else if (a_1 > a_2 && a_2 < a_3 && a_1 < a_3)
		sa(stack_a);
	else if (a_1 < a_2 && a_2 > a_3 && a_1 > a_3)
		rra(&stack_a);
	else if (a_1 > a_2 && a_2 < a_3 && a_1 > a_3)
		ra(&stack_a);
	else if (a_1 > a_2 && a_2 > a_3 && a_1 > a_3)
	{
		sa(stack_a);
		rra(&stack_a);
	}
}
