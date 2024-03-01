/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:14:17 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/21 15:13:42 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_isalpha (recreate libc function)
/**
 * @brief Checks for an alphabetic character.
 * 
 * The original function is part of the <ctype.h> standard library. 
 * Equivalent to (isupper(c) || islower(c)).
 * 
 * @param c An int; must have the value of an unsigned char or EOF.
 * @return The values returned are nonzero if the character c falls into the
 *  tested class.
 * @return  Zero if not.
 * 
 * @note No external dependencies allowed.
 */
//int isalpha(int c);
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
