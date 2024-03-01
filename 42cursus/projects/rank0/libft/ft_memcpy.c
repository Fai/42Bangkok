/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:38:24 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:48:08 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_memcpy (recreate libc function)
/**
 * @brief Copy memory area (overlaps not allowed).
 * 
 * The original function is part of the <string.h> standard library.
 * Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 * 
 * @param dest A pointer to the destination memory area.
 * @param src A pointer to the source memory area.
 * @param n The number of byte to copy from src to dest.
 * @return A pointer to the dest memory area.
 * 
 * @note No external dependencies allowed.
 */
//void	*memcpy(void *dest, const void *src, size_t n);
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sptr;
	unsigned char	*dptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	sptr = (unsigned char *)src;
	dptr = (unsigned char *)dest;
	while (n > 0)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
		n--;
	}
	return (dest);
}
