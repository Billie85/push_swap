/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:54:12 by root              #+#    #+#             */
/*   Updated: 2022/05/31 22:57:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dd;
	unsigned char	*ss;

	if (!src && !dest)
		return (NULL);
	dd = (unsigned char *)dest;
	ss = (unsigned char *)src;
	while (n--)
	{
		*dd++ = *ss++;
	}
	return (dest);
}
