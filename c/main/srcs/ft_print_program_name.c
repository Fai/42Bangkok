/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:24:10 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/20 17:12:34 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	if (argc > 0)
	{
		name = argv[0];
		while (*name)
		{
			write(1, name, 1);
			name++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
