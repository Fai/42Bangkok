/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/30 11:01:03 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_parse_input(char *mapfile, t_map *map)
{
	char	buffer[BUFF_SIZE];
	char	**file_data;
	int		fd;
	int		i;

	fd = open(mapfile, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	i = read(fd, buffer, BUFF_SIZE);
	if (i == -1)
	{
		return (-1);
	}
	buffer[i] = '\0';
	close(fd);
	file_data = ft_split(buffer, "\n");
	if (file_data == NULL)
		return (0);
	if (file_data[1] == NULL)
		return (0);
	if (!ft_set_pattern(file_data[0], map))
		return (0);
	if (!ft_set_map(file_data, map))
		return (0);
	return (1);
}

int	ft_set_pattern(char *file_data, t_map *map)
{
	int		data_length;
	int		map_index;

	data_length = 0;
	map_index = 0;
	while (file_data[data_length] != '\0')
		data_length++;
	if (data_length < 3)
		return (0);
	map->pattern = (t_pattern *)malloc(sizeof(t_pattern));
	if (map->pattern == NULL)
	{
		return (0);
	}
	map->pattern->char_empty = file_data[data_length - 3];
	map->pattern->char_obstacle = file_data[data_length - 2];
	map->pattern->char_full = file_data[data_length - 1];
	map->field_row = 0;
	while (map_index < data_length - 3)
	{
		if (file_data[map_index] < '0' || file_data[map_index] > '9')
			return (0);
		map->field_row = map->field_row * 10 + file_data[map_index] - '0';
		map_index++;
	}
	if (map->field_row == 0)
		return (0);
	return (1);
}

int	ft_set_map(char **file_data, t_map *map)
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	map->field = (int **)malloc(sizeof(int *) * (map->field_row));
	map->square = (t_square *)malloc(sizeof(t_square));
	if (map->field == NULL)
	{
		return (0);
	}
	map->field_col = strlen(file_data[1]);
	while (row < map->field_row && file_data[row + 1] != NULL)
	{
		if (strlen(file_data[row + 1]) != map->field_col)
			return (0);
		map->field[row] = (int *)malloc(sizeof(int) * (map->field_col));
		if (map->field[row] == NULL)
		{
			return (0);
		}
		col = -1;
		while (++col < map->field_col)
		{
			if (file_data[row + 1][col] == map->pattern->char_empty)
			{
				if (row == 0 || col == 0)
					map->field[row][col] = 1;
				else
				{
					map->field[row][col] = ft_min(map, row, col) + 1;
					if (map->field[row][col] > map->square->length)
					{
						map->square->length = map->field[row][col];
						map->square->x = col;
						map->square->y = row;
					}
				}
			}
			else if (file_data[row + 1][col] == map->pattern->char_obstacle)
				map->field[row][col] = 0;
			else
			{
				return (0);
			}
		}
		row++;
	}
	if (file_data[row + 1] != NULL)
		return (0);
	if (row != map->field_row)
		return (0);
	free(file_data);
	return (1);
}

void ft_free_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->field_row)
	{
		free(map->field[i]);
		i++;
	}
	free(map->field);
	free(map->pattern);
	free(map->square);
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
				write(1, &map->pattern->char_obstacle, 1);
			else if (y <= map->square->y
				&& y > map->square->y - map->square->length
				&& x <= map->square->x && x > map->square->x - map->square->length)
				write(1, &map->pattern->char_full, 1);
			else
				write(1, &map->pattern->char_empty, 1);
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
	t_map	*map;

	argi = 0;
	if (argc == 1)
	{
		write(1, "input error\n", 12);
		return (-1);
	}
	map = malloc(sizeof(t_map));
	if (map == NULL)
	{
		return (-1);
	}
	while (++argi < argc)
	{
		if (ft_parse_input(argv[argi], map))
		{
			ft_print_result(map);
			ft_free_map(map);
		}
		else
			write(1, "map error\n", 10);
	}
	return (1);
}
