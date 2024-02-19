/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 21:20:45 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	c;

	if (ac < 2)
		return (write(2, "File name missing.\n", 19));
	if (ac > 2)
		return (write(2, "Too many arguments.\n", 20));
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (write(2, "Cannot read file.\n", 18));
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (0);
}
