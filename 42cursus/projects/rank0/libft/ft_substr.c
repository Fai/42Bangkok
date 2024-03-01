/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:07:43 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 18:54:56 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_substr (novel function)
/**
 * @brief Extracts a substring of a given length from a given start position.
 * 
 * Allocates with malloc() and returns a substring from the string s.
 * The substring begins at index ‘start’ and is of maximum size ‘length’.
 * 
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string s.
 * @param len The maximum length of the string.
 * @return The substring.
 * @return NULL if the allocation fails.
 * 
 * @note Depends on malloc() from <stdlib.h>.
 */
//char *ft_substr(char const *s, unsigned int start, size_t len);
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	index = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	sub = malloc(sizeof(char) * (len) + 1);
	if (sub == NULL)
		return (NULL);
	while (index < len && s[start + index] != '\0')
	{
		sub[index] = s[start + index];
		index++;
	}
	sub[index] = '\0';
	return (sub);
}
