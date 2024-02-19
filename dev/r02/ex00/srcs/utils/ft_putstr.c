/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:54:33 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/26 17:31:18 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		position;
	char	current;

	position = 0;
	while (str[position] != '\0')
	{
		current = str[position];
		write(1, &current, 1);
		position++;
	}
}
