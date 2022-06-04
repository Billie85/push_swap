/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:54:29 by root              #+#    #+#             */
/*   Updated: 2022/06/02 09:32:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	c;
	unsigned char	*str;

	i = 0;
	c = (unsigned char)ch;
	str = (unsigned char *)buf;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
