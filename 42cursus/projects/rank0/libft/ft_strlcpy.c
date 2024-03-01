/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:46:53 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 16:38:37 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strlcpy (recreate libc function)
/**
 * @brief Size-bounded string copying.
 * 
 * The original function is part of the <string.h> standard library.
 * Copies up to size - 1 characters from the NUL-terminated string src to dst,
 *  NUL-terminating the result.
 * Takes the full size of the buffer (not just the length) and guarantee to
 *  NUL-terminate the result (as long as size is larger than 0).
 * Note that a byte for the NUL should be included in size.
 * Note src must be NUL-terminated (a true C string).
 * 
 * @param dst A pointer to the destination string.
 * @param src A pointer to the source string.
 * @param size The full size of the buffer (including the NUL byte).
 * @return The total length of the string it tried to create (the length of
 *  src); this is to make truncation detection simple. 
 * 
 * @note No external dependencies allowed.
 */
//size_t strlcpy(char *dst, const char *src, size_t size);
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
