/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:31:32 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/19 19:26:06 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_memset (recreate libc function)
/**
 * @brief Fill memory with a constant byte.
 * 
 * The original function is part of the <string.h> standard library.
 * The memset() function fills the first n bytes of the memory area pointed to
 *  by s with the constant byte c.
 * 
 * @param s A pointer.
 * @param c An int that represents the constant byte to use.
 * @param n The number of bytes of memory to fill.
 * @return A pointer to the memory area s.
 * 
 * @note No external dependencies allowed.
 */
//void	*memset(void *s, int c, size_t n);
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
