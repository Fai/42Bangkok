/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:54:24 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/22 19:38:19 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocate and return a string representing integer, handle negative         */
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
	char	*numstring;
	int		size;
	int		index;

	size = ft_ndigit(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	numstring = (char *)ft_calloc(sizeof(char), (size + 1));
	if (!numstring)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		numstring[0] = '-';
	}
	index = size - 1;
	while (n != 0)
	{
		numstring[index] = (n % 10) + '0';
		n = n / 10;
		index--;
	}
	return (numstring);
}
