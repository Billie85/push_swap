/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:53:13 by root              #+#    #+#             */
/*   Updated: 2022/06/02 12:53:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_node(t_node *lst, t_node *new_lst)
{
	new_lst->next = lst->next;
	lst->next->prev = new_lst;
	lst->next = new_lst;
	new_lst->prev = lst;
}
