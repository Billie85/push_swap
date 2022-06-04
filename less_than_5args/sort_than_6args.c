/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_than_6args.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:00:50 by root              #+#    #+#             */
/*   Updated: 2022/06/02 09:29:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_than_6args(t_node *stack_a, int argc)
{
	if (argc == 2)
		sa(stack_a);
	else if (argc == 3)
		sort_argument_size3(stack_a);
	else if (argc == 4)
		sort_argument_size4(stack_a);
	else if (argc == 5)
		sort_argument_size5(stack_a);
}
