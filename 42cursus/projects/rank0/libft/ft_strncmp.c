/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:25:14 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 23:33:38 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strncmp (recreate libc function)
/**
 * @brief Compare two strings (up to n bytes).
 * 
 * The original function is part of the <string.h> standard library.
 * The return value is the arithmetic result of subtracting the last compared
 *  byte in s2 from the last compared byte in s1.
 * The comparison stops when a difference is found, or if a string NUL
 *  terminator is found (verify).
 * 
 * @param s1 Pointer to string1.
 * @param s2 Pointer to string 2.
 * @param n The number of bytes to compare.
 * @return 0 if s1==s2.
 * @return A negative value if s1<s2.
 * @return A positive value if s1>s2 (only looking at the first n bytes).
 * 
 * @note No external dependencies allowed.
 */
//int		strncmp(const char *s1, const char *s2, size_t n);
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
