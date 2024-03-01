/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:00:51 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 20:08:37 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strjoin (novel function)
/**
 * @brief Concatenates two strings and returns a new string.
 * 
 * Allocates with malloc() and returns a new string, which is the result of the
 *  concatenation of ‘s1’ and ‘s2’.
 * 
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return The new string.
 * @return NULL if the allocation fails.
 * 
 * @note Depends on malloc() from <stdlib.h>.
 */
//char *ft_strjoin(char const *s1, char const *s2);
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		size1;
	int		size2;
	int		index;

	index = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
	if (result == 0)
		return (0);
	while (*s1 != '\0')
	{
		result[index] = *s1;
		s1++;
		index++;
	}
	while (*s2 != '\0')
	{
		result[index] = *s2;
		s2++;
		index++;
	}
	result[index] = '\0';
	return (result);
}
