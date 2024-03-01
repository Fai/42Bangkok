/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:34:42 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 18:19:58 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_bzero (recreate libc function)
/**
 * @brief Zero a byte string.
 * 
 * The original function is part of the <strings.h> UNIX library (not the
 *  standard C library).
 * The bzero() function erases the data in the n bytes of the memory starting at
 *  the location pointed to by s, by writing zeros (bytes containing '\0') to
 *  that area.
 * 
 * @param s A pointer to the memory location to be erased.
 * @param n Number of bytes of memory to be erased.
 * @return None.
 * 
 * @note No external dependencies allowed.
 */
//void	bzero(void *s, size_t n);
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		n--;
		p++;
	}
}
