/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:52:18 by root              #+#    #+#             */
/*   Updated: 2022/06/02 09:32:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_back(t_node *lst, t_node *new_lst)
{
	t_node	*begin;
	t_node	*last;

	if (lst == NULL)
		return ;
	else
	{
		begin = lst;
		last = lst->prev;
		last->next = new_lst;
		new_lst->prev = last;
		new_lst->next = begin;
		begin->prev = new_lst;
	}
}
