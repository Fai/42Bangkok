/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:42:14 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:47:15 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_memmove (recreate libc function)
/**
 * @brief Copy memory area (overlaps allowed).
 * 
 * The original function is part of the <string.h> standard library.
 * The  memmove()  function  copies  n bytes from memory area src to memory area
 *  dest. 
 * The memory areas may overlap: copying takes place as though the bytes in src
 *  are first copied into a temporary array that does not overlap src or dest,
 *  and the bytes are then copied from the temporary array to dest.
 * 
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n The number of byte to copy from src to dest.
 * @return A pointer to the dest memory area.
 * 
 * @note No external dependencies allowed.
 */
//void	*memmove(void *dest, const void *src, size_t n);
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL & src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}
