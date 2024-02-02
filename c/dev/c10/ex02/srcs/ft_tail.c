/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:15:04 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/02 16:25:36 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  The tail utility displays the contents of file or, by default, 
 *	its standard input, to the standard out-put.
 *	The display begins at a byte, line or 512-byte block location in the input.
 *	With -c flag, it displays the last n bytes.
 **/

#include "ft_tail.h"

int	ft_tail(char *filename)
{
	char	*buffer;
	char	**linebuff;
	int		fd;
	int		bytes;
	int		linecount;
	int		lineindex;

	buffer = malloc(DEFAULT_TAIL_BYTES);
	if (filename == NULL)
		bytes = read(0, buffer, DEFAULT_TAIL_BYTES);
	else
	{
		fd = open(filename, O_RDONLY);
		bytes = read(fd, buffer, DEFAULT_TAIL_BYTES);
	}
	if (bytes == -1)
		ft_put_error(filename);
	linebuff = ft_split(buffer, "\n");
	free(buffer);
	linecount = 0;
	while (linebuff[linecount] != NULL)
		linecount++;
	lineindex = 10;
	while (lineindex > 0)
	{
		ft_putstr(linebuff[linecount - lineindex]);
		write(1, "\n", 1);
		lineindex--;
	}
	free(linebuff);
	return (1);
}

int	ft_tail_bytes(char *filename, int bytes)
{
	char	*buffer;
	int		fd;
	int		bytescount;
	int		bytesindex;

	buffer = malloc(DEFAULT_TAIL_BYTES);
	if (filename == NULL)
		bytes = read(0, buffer, DEFAULT_TAIL_BYTES);
	else
	{
		fd = open(filename, O_RDONLY);
		bytes = read(fd, buffer, DEFAULT_TAIL_BYTES);
	}
	if (bytes == -1)
	{
		ft_put_error(filename);
		return (0);
	}
	bytescount = 0;
	while (buffer[bytescount] != '\0')
		bytescount++;
	bytesindex = bytescount - bytes;
	while (bytesindex <= bytescount)
	{
		write(1, &buffer[bytesindex], 1);
		bytesindex++;
	}
	write(1, "\n", 1);
	free(buffer);
	return (1);
}

int	main(int argc, char **argv)
{
	int		argindex;

	if (argc >= 2 && ft_strcmp(argv[1], "-c") == 0)
	{
		argindex = 3;
		while (argindex < argc || argc == 2)
		{
			if (argc > 4)
			{
				write(1, "==> ", 4);
				ft_putstr(basename(argv[argindex]));
				write(1, " <==\n\n", 6);
			}
			ft_tail_bytes(argv[argindex], ft_atoi(argv[2]));
			argindex++;
		}
		return (0);
	}
	argindex = 1;
	while (argindex < argc || argc == 1)
	{
		if (argc > 2)
		{
			write(1, "==> ", 4);
			ft_putstr(basename(argv[argindex]));
			write(1, " <==\n\n", 6);
		}
		ft_tail(argv[argindex]);
		if (argindex < argc - 1)
			write(1, "\n", 1);
		argindex++;
	}
	return (0);
}
