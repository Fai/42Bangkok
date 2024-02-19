/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:48:54 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/29 14:51:09 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_set_trip(char *str, int size, t_triplets *trip, int trip_size)
{
	int	index;
	int	offset;
	int	n;

	index = 0;
	offset = ft_get_offset(size);
	n = offset;
	while (index < trip_size)
	{
		ft_strncpy(trip[index].triplet, (str + size - offset), n);
		trip[index].index = index;
		if (offset + 2 == size)
		{
			offset += 2;
			n = 2;
		}
		else if (offset + 1 == size)
		{
			offset += 1;
			n = 1;
		}
		else
			offset += 3;
		index++;
	}
}

int	ft_get_size(char *start)
{
	int	size;

	size = 0;
	while (is_numchar(*start))
	{
		start++;
		size++;
	}
	return (size);
}

int	ft_div_start(char *start, t_triplets **trip)
{
	int			size;
	int			trip_size;

	size = ft_get_size(start);
	if (size % 3 == 0)
		trip_size = size / 3;
	else
		trip_size = (size / 3) + 1;
	*trip = malloc(sizeof(t_triplets) * trip_size + 1);
	ft_set_trip(start, size, *trip, trip_size);
	(*trip)[trip_size].index = -1;
	return (trip_size);
}

int	ft_get_start(int argc, char **argv, t_triplets **trip)
{
	char		*start;

	if (argc == 2)
		start = argv[1];
	else
		start = argv[2];
	if (!ft_valid_start(start))
		return (0);
	while (*start)
	{
		if (*start == ' ' || *start == '0')
			start++;
		else
			break ;
	}
	while (!is_numchar(*start))
		start--;
	return (ft_div_start(start, trip));
}
