/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:52:28 by root              #+#    #+#             */
/*   Updated: 2022/06/02 15:38:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_nodes(t_node *head_ref)
{
	t_node	*tmp;
	int		i;

	tmp = head_ref;
	i = 0;
	if (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	while (tmp != head_ref)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
