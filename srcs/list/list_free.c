/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 21:14:24 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:14:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_free(t_node **list)
{
	t_node	*next;
	t_node	*tmp;

	next = (*list)->next;
	while (next && (next != *list))
	{
		tmp = next;
		next = next->next;
		free (tmp);
	}
	free (*list);
	*list = NULL;
}
