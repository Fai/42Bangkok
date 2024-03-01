/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:21:31 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/19 16:11:21 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strmapi (novel function)
/**
 * @brief Applies another function to each character of a string,  returning a
 *  new string.
 * 
 * Applies the function ‘f’ to each character of the string ‘s’, and passing its
 *  index as first argument to create a new string with malloc() resulting from
 *  successive applications of ‘f’.
 * 
 * @param s The string on which to iterate.
 * f The function to apply to each character.
 * @return The string created from the successive applications of ‘f’.
 * @return NULL if the allocation fails.
 * 
 * @note Depends on malloc() from <stdlib.h>.
 */
//char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*result;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
