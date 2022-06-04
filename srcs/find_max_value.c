/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:48:15 by root              #+#    #+#             */
/*   Updated: 2022/06/01 02:03:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	find_max_value(int number[], int n)
{
	int	max_value;
	int	i;

	max_value = number[0];
	i = 0;
	while (i < n)
	{
		if (number[i] > max_value)
		{
			max_value = number[i];
		}
		i++;
	}
	return (max_value);
}
