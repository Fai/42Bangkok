/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:08:28 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 22:21:32 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* applied function on each char of string passed   */
#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
