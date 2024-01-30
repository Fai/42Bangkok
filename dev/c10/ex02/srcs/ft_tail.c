/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/30 14:31:46 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  The tail utility displays the contents of file or, by default, 
 *	its standard input, to the standard out-put.
 *	The display begins at a byte, line or 512-byte block location in the input.
 *	With -c flag, it displays the last n bytes.
 **/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <fcntl.h>
#include <errno.h>

#define DEFAULT_TAIL_BYTES 10

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

void	ft_tail(char *filename, int n)
{
	char	*buffer;
	int		fd;
	int		i;
	int		byte_index;
	int		bytes_read;
	int		current_byte;

	*buffer = malloc(n * sizeof(char));
	fd = open(filename, O_RDONLY);
	i = 0;
	if (fd < 0)
		ft_put_error(filename);
	current_byte = 0;
	while ((bytes_read = read(fd, &buffer[current_byte], 1)) > 0)
		current_byte = (current_byte + 1) % n;
	if (bytes_read < 0)
		ft_put_error(filename);
	while (i++ < n)
	{
		byte_index = (current_byte + i) % n;
		write(1, &buffer[byte_index], 1);
	}
	free(buffer);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	i = 0;
	n = DEFAULT_TAIL_BYTES;
	if (argc > 2)
	{
		n = atoi(argv[2]);
	}
	while (i++ < argc)
	{
		ft_tail(argv[i], n);
	}
	return (0);
}
