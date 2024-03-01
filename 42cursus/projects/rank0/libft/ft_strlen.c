/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:28:09 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 18:48:59 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strlen (recreate libc function)
/**
 * @brief Calculate the length of a string.
 * 
 * The original function is part of the <string.h> standard library.
 * 
 * @param s A string.
 * @return The number of bytes in the string pointed to by s.
 * 
 * @note No external dependencies allowed.
 */
//size_t strlen(const char *s);

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s != '\0')
	{
		s++;
		size++;
	}
	return (size);
}
