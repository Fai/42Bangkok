/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:09:21 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 19:29:01 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strtrim (novel function)
/**
 * @brief Trims a string with reference to a set of characters to remove from the
 *  start and end.
 * 
 * Allocates with malloc() and returns a copy of ‘s1’ with the characters
 *  specified in ‘set’ removed from the beginning and the end of the string.
 * 
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string.
 * @return NULL if the allocation fails.
 * 
 * @note Depends on malloc() from <stdlib.h>.
 */
//char *ft_strtrim(char const *s1, char const *set);
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	size_t	index;

	index = 0;
	if (!s1 || !set)
		return (NULL);
	str_len = ft_strlen(s1);
	while (s1[index])
	{
		while (ft_strchr(set, s1[index]) && s1[index])
		{
			index++;
		}
		if (index == str_len)
			return (ft_substr(s1, index, 0));
		while (ft_strchr(set, s1[str_len - 1]))
		{
			str_len--;
		}
		return (ft_substr(s1, index, str_len - index));
	}
	return (ft_substr(s1, index, 0));
}
