/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:11:20 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 16:28:26 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strlcat (recreate libc function)
/**
 * @brief Size-bounded string concatenation.
 * 
 * The original function is part of the <string.h> standard library.
 * Appends the NUL-terminated string src to the end of dst.  It will append at
 *  most size - ft_strlen(dst) - 1 bytes, NUL-terminating the result.
 * Takes the full size of the buffer (not just the length) and guarantee to
 *  NUL-terminate the result (as long as size is larger than 0, or as long as
 *  there is at least one byte free in dst).
 * Note that a byte for the NUL should be included in size.
 * Note both src and dst must be NUL-terminated (true C strings).
 * Note if strlcat() traverses size characters without finding a NUL, the length
 *  of the string is considered to be size and the destination string will not
 *  be NUL-terminated (since there was no space for the NUL).  This keeps
 *  strlcat() from running off the end of a string.  In practice this should not
 *  happen (as it means that either size is incorrect or that dst is not a
 *  proper “C” string).
 * 
 * @param dst A pointer to the destination string.
 * @param src A pointer to the source string.
 * @param size The full size of the buffer (including the NUL byte).
 * @return The total length of the string it tried to create (the length of dst
 *  plus the length of src); this is to make truncation detection simple. 
 * 
 * @note No external dependencies allowed.
 */
//size_t strlcat(char *dst, const char *src, size_t size);
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst == NULL && size <= 0)
		return (0);
	if (size <= dst_len)
		return (size + src_len);
	while ((dst_len + i) < (size - 1) && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
