/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:58:11 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/20 02:03:22 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		argindex;
	char	*argstr;

	argindex = argc - 1;
	if (argc <= 0)
	{
		return (0);
	}
	while (argindex > 0)
	{
		argstr = argv[argindex];
		while (*argstr != '\0')
		{
			write(1, argstr, 1);
			argstr++;
		}
		write(1, "\n", 1);
		argindex--;
	}
	return (0);
}
