/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:25:06 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 13:27:51 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_isascii (recreate libc function)
/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into the
 *  ASCII character set.
 * 
 * The original function is part of the <ctype.h> standard library.
 * 
 * @param c An int; must have value of an unsigned char or EOF.
 * @return The values returned are nonzero if the character c falls into the
 *  tested class.
 * @return  Zero if not.
 * 
 * @note No external dependencies allowed.
 */
//int	isascii(int c);
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
