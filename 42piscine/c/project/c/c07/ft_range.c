/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:09 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/22 21:06:02 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	index;
	int	range;

	index = 0;
	range = max - min;
	if (range <= 0)
	{
		return (NULL);
	}
	ints = (int *)malloc(sizeof(int) * (range));
	while (min < max)
	{
		ints[index] = min;
		min++;
		index++;
	}
	return (ints);
}
