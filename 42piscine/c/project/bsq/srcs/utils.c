/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 16:42:46 by wsiriyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_str_is_printable(char	*str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_min(t_map *map, int row, int col)
{
	int	min;

	min = map->field[row - 1][col - 1];
	if (map->field[row - 1][col] < min)
		min = map->field[row - 1][col];
	if (map->field[row][col - 1] < min)
		min = map->field[row][col - 1];
	return (min);
}

int	ft_read_file(char *file_name)
{
	int		size;
	char	buf;
	int		fd;

	size = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "map error\n", 10);
		return (-1);
	}
	while (read(fd, &buf, 1))
		size++;
	close(fd);
	return (size + 1);
}
