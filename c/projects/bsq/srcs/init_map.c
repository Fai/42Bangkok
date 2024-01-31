/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsiriyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:43:48 by wsiriyon          #+#    #+#             */
/*   Updated: 2024/01/31 16:44:38 by wsiriyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_reset_map(t_map *map)
{
	map->square.length = 0;
	map->square.x = 0;
	map->square.y = 0;
	map->field_col = 0;
	map->field_row = 0;
}

int	ft_stdio_input(t_map *map)
{
	char	buffer[BUFF_SIZE];
	char	**file_data;
	int		input;

	input = read(0, buffer, BUFF_SIZE);
	if (input == -1)
	{
		write(1, "map error\n", 10);
		return (-1);
	}
	buffer[input] = '\0';
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

int	ft_parse_input(char *mapfile, t_map *map)
{
	char	*buffer;
	char	**file_data;
	int		fd;
	int		i;
	int		file_size;

	file_size = ft_read_file(mapfile);
	fd = open(mapfile, O_RDONLY);
	buffer = (char *) malloc(file_size);
	i = read(fd, buffer, file_size);
	if (i == -1)
		return (-1);
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

void	ft_start_one(t_map *map)
{
	if (ft_stdio_input(map))
	{
		ft_print_result(map);
		ft_free_map(map);
	}
	else
		write(1, "map error\n", 10);
}

void	ft_start_many(char *mapname, t_map *map)
{
	if (ft_parse_input(mapname, map))
	{
		ft_print_result(map);
		ft_free_map(map);
	}
	else
		write(1, "map error\n", 10);
}
