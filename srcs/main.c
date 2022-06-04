/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:02:53 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:12:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_two_data(int **copy_array, int **origin_arg)
{
	if (copy_array != NULL)
	{
		free(*copy_array);
		*copy_array = NULL;
	}
	if (origin_arg != NULL)
	{
		free(*origin_arg);
		*origin_arg = NULL;
	}
	return (0);
}

int	free_one_function(int **data)
{
	if (data != NULL)
	{
		free(*data);
		*data = NULL;
	}
	return (0);
}

int	main_helper(int argc, int *copy_array, int *origin_arg)
{
	t_node	*stack_a;
	int		*compressed_arr;
	int		bits_width;
	int		max_number;

	if (array_is_sorted(copy_array, argc - 1))
		return (free_two_data(&copy_array, &origin_arg));
	if (array_is_sorted(origin_arg, argc - 1))
		return (free_two_data(&copy_array, &origin_arg));
	compressed_arr = sort_compression(argc, copy_array, origin_arg);
	max_number = find_max_value(compressed_arr, argc - 1);
	bits_width = count_bits(max_number);
	stack_a = new_node_data(argc, compressed_arr);
	if (argc <= 6)
		sort_than_6args(stack_a, argc -1);
	else
		radix_sort(stack_a, bits_width, argc);
	list_free(&stack_a);
	free(compressed_arr);
	return (free_two_data(&copy_array, &origin_arg));
}

int	main(int argc, char *argv[])
{
	int	i;
	int	*copy_array;
	int	*origin_arg;

	if (check_error(argc - 1, argv + 1) == ERROR)
		return (1);
	copy_array = malloc(sizeof(int) * (argc - 1));
	if (copy_array == NULL)
		return (check_null(copy_array));
	origin_arg = malloc(sizeof(int) * (argc - 1));
	if (origin_arg == NULL)
		return (free_one_function(&copy_array));
	i = 1;
	while (i < argc)
	{
		copy_array[i - 1] = ft_atoi(argv[i]);
		origin_arg[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	main_helper(argc, copy_array, origin_arg);
	return (0);
}
