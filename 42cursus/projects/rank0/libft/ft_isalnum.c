/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:20:45 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 13:22:22 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_isalnum (recreate libc function)
/**
 * @brief Checks for an alphanumeric character.
 * 
 * The original function is part of the <ctype.h> standard library.
 * Equivalent to (isalpha(c) || isdigit(c)).
 * 
 * @param c An int; must have value of an unsigned char or EOF.
 * @return The values returned are nonzero if the character c falls into the
 *  tested class.
 * @return  Zero if not.
 * 
 * @note No external dependencies allowed.
 */
//int isalnum(int c);
int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
