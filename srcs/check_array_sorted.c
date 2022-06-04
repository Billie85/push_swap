/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_array_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:42:21 by root              #+#    #+#             */
/*   Updated: 2022/05/31 22:42:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_bool	array_is_sorted(int arr[], int num)
{
	int	i;

	i = 1;
	while (i < num)
	{
		if (arr[i - 1] > arr[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
