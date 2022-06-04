/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:53:59 by root              #+#    #+#             */
/*   Updated: 2022/06/02 09:31:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_node *lst)
{
	t_node	*tmp;
	int		size;

	tmp = lst;
	size = 0;
	while (tmp->next != lst)
	{
		tmp = tmp->next;
		size += 1;
	}
	return (size);
}
