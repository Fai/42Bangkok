/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:01:29 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 19:02:19 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_isdigit (recreate libc function)
/**
 * @brief Checks for a digit (0 through 9).
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
//int isdigit(int c);
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
