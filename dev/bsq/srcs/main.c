/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:41:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/29 17:00:59 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_set_pattern(char buffer[BUFF_SIZE])
{

}

char	**ft_set_map(char buffer[BUFF_SIZE])
{

}

int	ft_parse_input(char *mapfile, char **map, char *pattern)
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
	pattern = ft_set_pattern(buffer);
	map = ft_set_map(buffer);
	return (0);
}

int	ft_map_is_valid(char **map)
{

}

int	ft_calculate_square(char **map, char *pattern)
{

}

int	ft_fill_square(char **map, int square[5])
{

}

int	ft_print_result(char **map)
{

}

int	ft_free_map(char **map)
{

}

int	ft_free_pattern(char *pattern)
{

}

int	main(int argc, char **argv)
{
	char	**map;
	char	*pattern;
	int		argi;
	int		square[5];

	argi = 1;
	while (argi < argc)
	{
		ft_parse_input(argv[argi], map, pattern);
		if (!ft_map_is_valid(map))
		{
			write(1, "map error\n", 10);
			return (-1);
		}
		ft_calculate_square(map, pattern);
		ft_fill_square(map, square);
		ft_print_result(map);
		ft_free_map(map);
		ft_free_pattern(pattern);
		argi++;
	}
	return (0);
}
