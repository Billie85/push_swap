/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_compression.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:50:35 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:23:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*sort_compression(int argc, int *copy_atoi, int *normal_argument)
{
	int	i;
	int	result;
	int	*array_result;

	bubble_sort(copy_atoi, argc);
	i = 0;
	array_result = malloc(sizeof(int) * (argc - 1));
	if (array_result == NULL)
		return (NULL);
	while (i < argc - 1)
	{
		result = binary_search(copy_atoi, argc - 1, normal_argument[i]);
		if (result == -1)
			break ;
		else
		array_result[i] = result;
		i++;
	}
	return (array_result);
}
