/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/01 02:45:07 by rpithaks         ###   ########.fr       */
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

#define DEFAULT_TAIL_BYTES 128

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

void	ft_tail_print(char *buffer, int n)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	str = malloc((n + 1) * sizeof(char));
	while (buffer[i])
		i++;
	while (j < n)
	{
		str[j] = buffer[i - n + j];
		j++;
	}
	str[j] = '\0';
	ft_putstr(str);
	free(str);
}

void	ft_tail(char *filename, int n)
{
	int		fd;
	int		bytes_read;
	char	*buffer;

	buffer = malloc((2048 * 1024) * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_put_error(filename);
	bytes_read = read(fd, buffer, 2048 * 1024 - 1);
	buffer[bytes_read] = '\0';
	if (bytes_read < 0)
		ft_put_error(filename);
	ft_tail_print(buffer, n);
	free(buffer);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	i = 1;
	n = DEFAULT_TAIL_BYTES;
	if (argc > 2)
	{
		n = atoi(argv[2]);
	}
	while (i < argc - 1)
	{
		ft_tail(argv[i], n);
		i++;
	}
	return (0);
}
