/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/29 20:49:19 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_set_pattern(char buffer[BUFF_SIZE], int *mapsize, char *pattern)
{
	char	*pattern;
	int		i;
	int		m;

	i = 0;
	m = 0;
	*mapsize = 0;
	while (buffer[i] != '\n')
		i++;
	pattern = (char *)malloc(sizeof(char) * (4));
	pattern[i] = '\0';
	pattern[0] = buffer[i - 3];
	pattern[1] = buffer[i - 2];
	pattern[2] = buffer[i - 1];
	pattern[3] = '\0';
	while (m < i - 3)
	{
		if (buffer[m] < '0' || buffer[m] > '9')
			return (0);
		*mapsize = *mapsize * 10 + buffer[m] - '0';
		m++;
	}
	return (1);
}

void	**ft_set_map(char buffer[BUFF_SIZE], char *pattern, char **map, int *mapsize)
{
	int		m;
	int		i;
	int		j;

	m = 0;
	i = 0;
	map = (char **)malloc(sizeof(char *) * (mapsize + 1));
	while (buffer[i] != '\n')
		i++;
	while (buffer[i] != '\0')
	{
		j = 0;
		while (buffer[i + j] != '\n')
			j++;
		map[m] = (char *)malloc(sizeof(char) * (j + 1));
		map[m][j] = '\0';
		while (j >= 0)
		{
			map[m][j] = buffer[i];
			i++;
			j--;
		}
		m++;
	}
}

int	ft_parse_input(char *mapfile, char *pattern, char **map, int *mapsize)
{
	char	buffer[BUFF_SIZE];
	int		fd;
	int		i;

	fd = open(mapfile, O_RDONLY);
	if (fd == -1)
	{
		write(1, "map error\n", 10);
		return (-1);
	}
	i = read(fd, buffer, BUFF_SIZE);
	buffer[i] = '\0';
	close(fd);
	ft_set_pattern(buffer, pattern);
	ft_set_map(buffer, pattern, map, mapsize);
	return (0);
}

/* TODO : implement logic here */
int	ft_map_is_valid(char **map, char *pattern)
{
	if (map == NULL)
		return (0);
	if (ft_map_have_same_length(map) == 0)
		return (0);
	if (ft_map_have_valid_chars(map) == 0)
		return (0);
	if (ft_map_have_valid_patterns(map, pattern) == 0)
		return (0);
	return (1);
}

/* TODO : implement logic here */
int	ft_calculate_square(char **map, char *pattern, int square[5])
{
	int	x;
	int	y;
	int test[5];

	x = 0;
	y = 0;
	i = 0;	
	while (map[y + i])
	{
		while (map[x + i])
		{
			test[0] = x;
			test[1] = y;
			test[2] = x + i;
			test[3] = y + i;
			test[4] = (i + 1) * (i + 1);
			if (ft_check_square(map, pattern, square) == 1 && test[4] > square[4])
			{
				square[0] = test[0];
				square[1] = test[1];
				square[2] = test[2];
				square[3] = test[3];
				square[4] = test[4];
				i++;
			}
		}
	}

	return (0);
}

int	ft_check_square(char **map, char *pattern, int square[5])
{
	int	x_start;
	int	y_start;
	int	x_end;
	int	y_end;

	x_start = square[0];
	y_start = square[1];
	x_end = square[2];
	y_end = square[3];
	while (y_start <= y_end)
	{
		while (x_start <= x_end)
		{
			if (map[y_start][x_start] == pattern[1])
				return (0);
			x_start++;
		}
		y_start++;
	}
	return (1);
}

int	ft_fill_square(char **map, char *pattern, int square[5])
{
	int	x_start;
	int	y_start;
	int	x_end;
	int	y_end;

	x_start = square[0];
	y_start = square[1];
	x_end = square[2];
	y_end = square[3];
	while (y_start <= y_end)
	{
		while (x_start <= x_end)
		{
			map[y_start][x_start] = pattern[2];
			x_start++;
		}
		y_start++;
	}
	return (0);
}

int	ft_print_result(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (map[y])
	{
		while (map[y][x])
		{
			write(1, &map[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

int	main(int argc, char **argv)
{
	char	**map;
	char	*pattern;
	int		argi;
	int		mapsize;
	int		square[5];

	argi = 0;
	while (++argi < argc)
	{
		ft_parse_input(argv[argi], pattern, map, mapsize);
		if (!ft_map_is_valid(map, pattern))
		{
			write(1, "map error\n", 10);
			continue ;
		}
		ft_calculate_square(map, pattern);
		ft_fill_square(map, pattern, square);
		ft_print_result(map);
		free(map);
		free(pattern);
	}
	return (0);
}
