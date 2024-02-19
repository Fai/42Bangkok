/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:07:53 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/22 21:21:23 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ints;
	int	index;

	index = 0;
	ints = (int *)malloc(sizeof(int) * (max - min));
	*range = ints;
	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (ints == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		ints[index] = min;
		min++;
		index++;
	}
	return (index);
}
