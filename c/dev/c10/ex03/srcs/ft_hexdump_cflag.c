/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/01 05:28:09 by rpithaks         ###   ########.fr       */
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
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <fcntl.h>
#include <errno.h>
#define MAX_LENGTH 16

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

void	ft_print_hex_address(unsigned long num)
{
	char	*hex;
	char	buff[6];
	int		i;

	hex = "0123456789abcdef";
	i = 6;
	while (num > 0 && i > 0)
	{
		i--;
		buff[i] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		i--;
		buff[i] = '0';
	}
	write(1, buff, 6);
	write(1, "0", 1);
}

void	ft_print_ascii_value(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] == '\n')
			write(1, "  \\n", 4);
		else if (str[i] == '\t')
			write(1, "  \\t", 4);
		else if (str[i] == '\v')
			write(1, "  \\v", 4);
		else if (str[i] == '\f')
			write(1, "  \\f", 4);
		else if (str[i] == '\r')
			write(1, "  \\r", 4);
		else if (str[i] < 32 || str[i] == 127)
			write(1, "    ", 4);
		else
		{
			write(1, "   ", 3);
			write(1, str + i, 1);
		}
		i++;
	}
}

void	ft_hexdump(char *filename)
{
	int		fd;
	int		bytes_read;
	int		offset;
	char	*buffer;

	offset = 0;
	buffer = malloc((16 + 1) * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		ft_put_error(filename);
	bytes_read = read(fd, buffer, 16);
	buffer[bytes_read] = '\0';
	if (bytes_read < 0)
		ft_put_error(filename);
	while (bytes_read > 0)
	{
		ft_print_hex_address(offset++);
		ft_print_ascii_value(buffer, bytes_read);
		bytes_read = read(fd, buffer, 16);
		buffer[bytes_read] = '\0';
		write(1, "\n", 1);
	}
	ft_print_hex_address(offset);
	write(1, "\n", 1);
	free(buffer);
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
