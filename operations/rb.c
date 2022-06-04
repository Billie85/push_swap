/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:17:15 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:17:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_node **list_head)
{
	t_node	*tmp;
	t_node	*head_prev;

	write(1, "rb\n", 3);
	tmp = (*list_head)->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	head_prev = (*list_head)->prev;
	tmp->next = head_prev->next;
	head_prev->next->prev = tmp;
	head_prev->next = tmp;
	tmp->prev = head_prev;
	return ;
}
