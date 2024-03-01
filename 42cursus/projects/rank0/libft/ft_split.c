/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:30:44 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 23:11:24 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_split (novel function)
/**
 * @brief Splits a string into multiple substrings based on a delimiter.
 * 
 * Allocates with malloc() and returns an array of strings obtained by splitting
 *  ‘s’ using the character ‘c’ as a delimiter. The array must end with a NULL
 *  pointer.
 * 
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split.
 * @return NULL if the allocation fails.
 * 
 * @note Depends on malloc() and free() from <stdlib.h>.
 */
//char **ft_split(char const *s, char c);
#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int	words;
	int	index;

	words = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
		{
			words++;
			while (s[index] != c && s[index] != '\0')
				index++;
		}
		else
			index++;
	}
	return (words);
}

static void	ft_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static int	ft_isallocate(char **result, int index)
{
	if (!result[index])
	{
		while (index >= 0)
		{
			free(result[index]);
			index--;
		}
		free(result);
		return (0);
	}
	return (1);
}

static void	ft_findnextword(int *i, int *start, char const *s, char c)
{
	while (s[*i] == c)
		*i += 1;
	*start = *i;
	while (s[*i] != c && s[*i] != '\0')
		*i += 1;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		index;
	int		i;
	int		start;

	words = ft_wc(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	index = -1;
	i = 0;
	while (++index < words)
	{
		ft_findnextword(&i, &start, s, c);
		result[index] = (char *)malloc(sizeof(char) * (i - start + 1));
		if (!ft_isallocate(result, index))
			return (NULL);
		ft_strncpy(result[index], s + start, i - start);
	}
	result[index] = NULL;
	return (result);
}
