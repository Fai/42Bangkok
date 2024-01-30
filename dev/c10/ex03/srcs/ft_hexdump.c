/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/30 15:03:43 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_hexdump does the same as the system’s hexdump cli w/o redirection.
 * The hexdump utility is a filter which displays the specified files, or
 * the standard input, if no files are specified, in a user specified format.
 * -c      One-byte character display.  
 * Display the input offset in hexadecimal, followed by sixteen space-separated,
 * three column, space-filled, characters of input data per line.
 * allowed : close, open, read, write, malloc, free, strerror,basename
*/

#include <unistd.h>
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

void	ft_hexdump(char *filename)
{
	char	*buffer;
	int		fd;
	int		i;
	int		byte_index;
	int		bytes_read;
	int		current_byte;

	fd = open(filename, O_RDONLY);
	i = 0;
	if (fd < 0)
		ft_put_error(filename);
	*buffer = malloc(n * sizeof(char));
	while (read(fd, buffer, n))
	{
		write(1, buffer, n);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		ft_hexdump(0);
	while (i < argc)
	{
		ft_hexdump(argv[i]);
		i++;
	}
	return (0);
}
