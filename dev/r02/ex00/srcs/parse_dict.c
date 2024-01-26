/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:28:28 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/26 21:03:38 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>   // for open
#include <unistd.h>  // for close, read
#include <stdlib.h>  // for exit

#include "ft.h"

t_nbr	**parse_dict(char *filename)
{
	t_nbr	**parsed;
	int		fd;
	char	bf[30000];
	char	**strings;
	int		i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	read(fd, bf, 30000);
	strings = ft_split(bf, "\n");
	i = 0;
	parsed = malloc(ft_arraylen(strings) * sizeof(t_nbr));
	while (strings[i])
	{
		parsed[i] = malloc(sizeof(t_nbr));
		parsed[i]->numeric = ft_split(strings[i], ": ")[0];
		parsed[i]->written = ft_split(strings[i], ": ")[1];
		i++;
	}
	close(fd);
	return (parsed);
}
