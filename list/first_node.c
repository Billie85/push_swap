/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:52:36 by root              #+#    #+#             */
/*   Updated: 2022/06/03 18:29:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*first_node(int data)
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	if (head == NULL)
		return (NULL);
	head->next = head;
	head->prev = head;
	head->data = data;
	return (head);
}
