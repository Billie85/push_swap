/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:47:27 by root              #+#    #+#             */
/*   Updated: 2022/06/08 01:44:20 by kayumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	binary_search(int array[], int number_total, int element)
{
	int	left;
	int	right;
	int	middle;

	left = 0;
	right = number_total - 1;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (element == array[middle])
			return (middle);
		else if (element < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
