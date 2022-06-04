/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:17:32 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:18:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **list_head)
{
	t_node	*tmp;
	t_node	*head_next;

	write(1, "rra\n", 4);
	tmp = (*list_head)->prev;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	head_next = (*list_head);
	tmp->next = head_next->next;
	head_next->next->prev = tmp;
	head_next->next = tmp;
	tmp->prev = head_next;
	return ;
}
