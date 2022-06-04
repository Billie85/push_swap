/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:17:43 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:17:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node *stack_a)
{
	t_node	*tmp;

	write(1, "sa\n", 3);
	tmp = stack_a->next->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	tmp->next = stack_a->next;
	stack_a->next->prev = tmp;
	stack_a->next = tmp;
	tmp->prev = stack_a;
}
