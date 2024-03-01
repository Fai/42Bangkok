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

// FUNCTION ft_atoi (recreate libc function)
/**
 * @brief Convert an ASCII string of numbers to an integer.
 * 
 * The original function is part of the <stdlib.h> standard library.
 * Converts the initial portion of the string pointed to by nptr (stopping at
 *  the null-terminator or the first non-digit character) to int.
 * The string may begin with an arbitrary amount of white space (as determined by
 *  isspace(3)) followed by a single optional '+' or '-' sign.
 * No checks for overflow or underflow are done.
 * Only base-10 input can be converted.
 * 
 * @param nptr A pointer to a string.
 * @return The converted value.
 * @return 0 on error (note there is no way to distinguish between 0 as an error
 *  and as a converted value).
 * 
 * @note No external dependencies allowed.
 */
//int		atoi(const char *nptr);                        */
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
