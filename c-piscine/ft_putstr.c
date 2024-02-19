/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:49:51 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/17 18:51:47 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	len;

	len = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		len++;
	}
	str = str - len;
}
