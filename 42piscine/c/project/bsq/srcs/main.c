/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 16:20:12 by wsiriyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_free_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->field_row)
	{
		free(map->field[i]);
		i++;
	}
	free(map->field);
}

int	ft_print_result(t_map *map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < map->field_row)
	{
		while (x < map->field_col)
		{
			if (map->field[y][x] == 0)
				write(1, &map->pattern.char_obstacle, 1);
			else if (y <= map->square.y
				&& y > map->square.y - map->square.length
				&& x <= map->square.x
				&& x > map->square.x - map->square.length)
				write(1, &map->pattern.char_full, 1);
			else
				write(1, &map->pattern.char_empty, 1);
			x++;
		}
		write(1, "\n", 1);
		x = 0;
		y++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		argi;
	t_map	map;

	argi = 0;
	if (argc == 1)
	{
		ft_start_one(&map);
	}
	while (++argi < argc)
	{
		ft_reset_map(&map);
		ft_start_many(argv[argi], &map);
		if (argi != argc - 1)
			write(1, "\n", 1);
	}
	return (1);
}
