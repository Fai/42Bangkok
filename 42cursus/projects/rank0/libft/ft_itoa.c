/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:54:24 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:04:28 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_itoa (novel function)
/**
 * @brief Convert a positive or negative integer into an ASCII string.
 * 
 * Allocates with malloc() and returns a string representing the integer received
 *  as an argument. Negative numbers must be handled.
 * 
 * @param n The integer to convert.
 * @return The string representing the integer.
 * @return NULL if the allocation fails.
 * 
 * @note Depends on malloc() from <stdlib.h>.
 */
//char *ft_itoa(int n);
#include "libft.h"

static int	ft_ndigit(int n)
{
	int	digit;

	digit = 1;
	if (n < 0)
		digit++;
	while (n / 10)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*nptr;
	int		s;
	int		i;

	s = ft_ndigit(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	nptr = (char *)ft_calloc(sizeof(char), (s + 1));
	if (!nptr)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		nptr[0] = '-';
	}
	i = s - 1;
	while (n != 0)
	{
		nptr[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (nptr);
}
