/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:34:49 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:43:47 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_memchr (recreate libc function)
/**
 * @brief Scan memory area for first instance of a character.
 * 
 * The original function is part of the <string.h> standard library.
 * 
 * @param s A pointer to the memory area to search.
 * @param c An int representing the character to search for.
 * @param n The number of bytes of memory to search.
 * @return A pointer to the matching byte or NULL if the character does not
 *  occur in the given memory area.
 * 
 * @note No external dependencies allowed.
 */
//void	*memchr(const void *s, int c, size_t n);
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (0);
}
