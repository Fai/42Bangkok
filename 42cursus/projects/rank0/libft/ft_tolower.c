/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:46:19 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 15:48:11 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_tolower (recreate libc function)
/**
 * @brief Convert lowercase.
 * 
 * The original function is part of the <ctype.h> standard library.
 * If c is neither an unsigned char value nor EOF, the behavior of these
 *  functions is undefined.
 * 
 * @param c An int representing an ASCII letter (uppercase or lowercase).
 * @return The value of the converted letter.
 * @return c if the conversion was not possible.
 * 
 * @note No external dependencies allowed.
 */
//int	tolower(int c);
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
