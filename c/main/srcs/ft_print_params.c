/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:47:06 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/20 02:04:50 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		argindex;
	char	*argstr;

	argindex = 1;
	if (argc <= 0)
	{
		return (0);
	}
	while (argindex < argc)
	{
		argstr = argv[argindex];
		while (*argstr != '\0')
		{
			write(1, argstr, 1);
			argstr++;
		}
		write(1, "\n", 1);
		argindex++;
	}
	return (0);
}
