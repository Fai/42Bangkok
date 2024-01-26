/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:20:24 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/16 18:43:26 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char str)
{
	if (str > 9)
	{
		str = str - 10 + 'a';
		write(1, &str, 1);
	}
	else
	{
		str = str + '0';
		write(1, &str, 1);
	}
}

void	ft_putstr_non_printable(char	*str)
{
	unsigned char	hex;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			hex = *str;
			write(1, "\\", 1);
			print_hex(hex / 16);
			print_hex(hex % 16);
		}
		str++;
	}
}
