/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:48:39 by root              #+#    #+#             */
/*   Updated: 2022/06/03 18:48:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*push(int data, t_node **top)
{
	t_node	*new_node;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (0);
	new_node->data = data;
	new_node->next = *top;
	new_node->prev = *top;
	*top = new_node;
	return (*top);
}
