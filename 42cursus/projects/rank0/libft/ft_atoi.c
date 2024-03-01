/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:54:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:09:01 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* atoi convert a string to an integer, return int                            */
#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == 32 || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	if (*nptr == '\0')
		return (n);
	while (ft_isspace(*nptr))
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr != '\0' && *nptr >= '0' && *nptr <= '9')
	{
		n = n * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * n);
}
