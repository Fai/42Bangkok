/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:49:33 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 23:21:40 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strchr (recreate libc function)
/**
 * @brief Locate single-byte character in string (first occurrence).
 * 
 * The original function is part of the <string.h> standard library.
 * 
 * @param s Pointer to a string.
 * @param c Int representing the character to search for (ASCII byte value).
 * @return NULL if the character is not found.
 * @return A pointer to the matched character. The terminating null byte is
 *  considered part of the string, so that if c is specified as '\0' it will
 *  return a pointer to the terminator.
 * 
 * @note No external dependencies allowed.
 */
//char *strchr(const char *s, int c);
char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (*p != '\0')
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p++;
	}
	if (*p == (unsigned char)c)
		return ((char *)p);
	return (0);
}
