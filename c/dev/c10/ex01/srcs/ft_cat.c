/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/01 16:38:31 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO: no arguments receive -> stdio
 * TODO: error handling
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <fcntl.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_put_error(char *filename)
{
	ft_putstr(basename(filename));
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	exit(1);
}

int	ft_read_input(void)
{
	char	*buffer;
	char	*c;
	int		i;
	int		fd;

	i = 1;
	buffer = malloc(1024 * sizeof(char));
	fd = read(0, buffer, 1024);
	while (fd != 0)
	{
		if (fd < 0)
			ft_put_error("stdin");
		c = buffer;
		while (*c)
			write(1, c++, 1);
		fd = read(0, buffer, 1024);
	}
	free(buffer);
	return (0);
}

int	ft_display_file(char *filename)
{
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_put_error(filename);
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
		ft_read_input();
	while (i < ac)
	{
		ft_display_file(av[i]);
		i++;
	}
	return (0);
}
