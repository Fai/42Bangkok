/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:08:28 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 22:21:32 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_striteri (novel function)
/**
 * @brief Applies another function to each character of a string, modifying them
 *  in place.
 * 
 * Applies the function ‘f’ on each character of the string passed as argument,
 *  passing its index as first argument. Each character is passed by address to
 *  ‘f’ to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None.
 * 
 * @note No external dependencies allowed.
 */
//void	ft_striteri(char *s, void (*f)(unsigned int, char*));
#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
