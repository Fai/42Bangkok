/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:22:52 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 14:32:28 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_isprint (recreate libc function)
/**
 * @brief Checks for any printable character including space.
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
//int isprint(int c);
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
