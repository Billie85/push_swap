/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:48:00 by root              #+#    #+#             */
/*   Updated: 2022/06/04 21:22:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_bits(unsigned int num)
{
	unsigned int	count_total;

	count_total = 0;
	while (num)
	{
		count_total++;
		num >>= 1;
	}
	return (count_total);
}
