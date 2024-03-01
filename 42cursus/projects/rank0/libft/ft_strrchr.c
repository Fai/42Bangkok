/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:10:13 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/19 23:17:41 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strrchr (recreate libc function)
/**
 * @brief Locate single-byte character in string (last occurrence).
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
 * 
 */
//char *strrchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (*ret != '\0')
	{
		ret++;
	}
	while (ret >= (unsigned char *) s)
	{
		if (*ret == (unsigned char) c)
			return ((char *)ret);
		ret--;
	}
	return (0);
}
