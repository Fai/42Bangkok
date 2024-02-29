/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:55:55 by wsiriyon          #+#    #+#             */
/*   Updated: 2024/01/31 20:02:46 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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
	map->pattern.char_empty = file_data[data_length - 3];
	map->pattern.char_obstacle = file_data[data_length - 2];
	map->pattern.char_full = file_data[data_length - 1];
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

void	ft_fill_square(t_map *map, int row, int col)
{
	if (row == 0 || col == 0)
		map->field[row][col] = 1;
	else
		map->field[row][col] = ft_min(map, row, col) + 1;
	if (map->field[row][col] > map->square.length)
	{
		map->square.length = map->field[row][col];
		map->square.x = col;
		map->square.y = row;
	}
}

int	ft_fill_map(char **file_data, t_map *map, int row)
{
	int	col;

	col = -1;
	while (++col < map->field_col)
	{
		if (file_data[row + 1][col] == map->pattern.char_empty)
		{
			ft_fill_square(map, row, col);
		}
		else if (file_data[row + 1][col] == map->pattern.char_obstacle)
			map->field[row][col] = 0;
		else
			return (1);
	}
	return (0);
}

void	ft_free_file_data(char **file_data)
{
	int	i;

	i = 0;
	while (file_data[i])
		free(file_data[i++]);
	free(file_data);
}

int	ft_set_map(char **file_data, t_map *map)
{
	int		row;

	row = -1;
	map->field = (int **)malloc(sizeof(int *) * (map->field_row));
	if (map->field == NULL)
		return (0);
	map->field_col = ft_strlen(file_data[1]);
	while (++row < map->field_row && file_data[row + 1] != NULL)
	{
		if (ft_strlen(file_data[row + 1]) != map->field_col)
			return (0);
		map->field[row] = (int *)malloc(sizeof(int) * (map->field_col));
		if (map->field[row] == NULL)
			return (0);
		if (ft_fill_map(file_data, map, row))
			return (0);
	}
	if (file_data[row + 1] != NULL)
		return (0);
	if (row != map->field_row)
		return (0);
	ft_free_file_data(file_data);
	return (1);
}
