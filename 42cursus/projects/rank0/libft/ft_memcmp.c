/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:38:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:46:03 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_memcmp (recreate libc function)
/**
 * @brief Compare contents of two memory areas.
 * 
 * The original function is part of the <string.h> standard library.
 * The return value is the arithmetic result of subtracting the last compared
 *  byte in s2 from the last compared byte in s1.
 * The comparison stops when a difference is found.
 * 
 * @param s1 Pointer to memory area 1.
 * @param s2 Pointer to memory area 2.
 * @param n The number of bytes to compare.
 * @return 0 if s1==s2.
 * @return A negative value if s1<s2.
 * @return A positive value if s1>s2 (only taking into account the first n
 *  bytes).
 * 
 * @note No external dependencies allowed.
 */
//int		memcmp(const void *s1, const void *s2, size_t n);
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
