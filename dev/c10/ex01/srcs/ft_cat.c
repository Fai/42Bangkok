/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/30 15:03:46 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sys/stat.h"
#include "sys/types.h"
#include <fcntl.h>

int	ft_cat(char *filename)
{
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (write(2, "Cannot read file.\n", 18));
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (write(2, "File name missing.\n", 19));
	while (i < ac)
	{
		ft_cat(av[i]);
		i++;
	}
	return (0);
}
