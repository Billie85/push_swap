/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:53:08 by root              #+#    #+#             */
/*   Updated: 2022/06/03 19:54:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_empty(t_node *top)
{
	if (top == NULL)
		return (1);
	else
		return (0);
}

t_node	*pop_back(t_node *lst)
{
	t_node	*remove_node;

	if (check_empty(lst))
	{
		exit(1);
	}
	remove_node = lst;
	remove_node->next->prev = remove_node->prev;
	remove_node->prev->next = remove_node->next;
	return (remove_node);
}
