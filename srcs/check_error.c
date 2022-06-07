/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:47:50 by root              #+#    #+#             */
/*   Updated: 2022/06/08 01:06:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_bool	duplicate_elements_in_array(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				return (FALSE);
			}
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool	is_valid_number(char *num)
{
	size_t	i;

	i = 0;
	if (num[0] == '-' || num[0] == '+')
		i = 1;
	while (num[i] != '\0')
	{
		if (!ft_isdigit(num[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

long long	ft_atoll(char *str)
{
	size_t		i;
	long long	ans;
	int			gg;

	ans = 0;
	gg = 1;
	while (*str && ft_space(str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			gg = -1;
	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (ans > INT_MAX)
			return ((long long)INT_MAX + 1);
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	return (ans * gg);
}

t_bool	is_overflowing(char *num)
{
	long long	long_number;

	long_number = ft_atoll(num);
	if (long_number < INT_MIN || long_number > INT_MAX)
		return (TRUE);
	return (FALSE);
}

int	check_error(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[i] != NULL)
	{
		if (!is_valid_number(argv[i]))
			return (return_error());
		if (is_overflowing(argv[i]))
		{
			return (return_error());
		}
		i++;
	}
	if (!duplicate_elements_in_array(argc, argv))
		return (return_error());
	return (SUCCESS);
}
