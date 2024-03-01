/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:43:18 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 18:19:44 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strnstr (recreate libc function)
/**
 * @brief Locate a substring in a defined initial portion of a string.
 * 
 * The original function is part of the <string.h> standard library.
 * Locates the first occurrence of the null-terminated string little in the
 *  string big, where not more than len characters are searched.
 * Characters that appear after a ‘\0’ character are not searched.
 * 
 * @param big A pointer to the string to be searched.
 * @param little A pointer to the null-terminated substring to find.
 * @param len The maximum number of characters to search.
 * @return If little is an empty string, big is returned.
 * @return If little occurs nowhere in big, NULL is returned.
 * @return If little is found it its entirety, a pointer to the first character
 *  of the first occurrence of little is returned.
 * 
 * @note No external dependencies allowed.
 * 
 */
//char *strnstr(const char *big, const char *little, size_t len);
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*sub;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	str = (char *)big;
	sub = (char *)little;
	i = 0;
	while (i < len && *str != '\0')
	{
		while (str[i] == *sub && i < len && *sub != '\0')
		{
			sub++;
			i++;
			if (*sub == '\0')
				return (str + i - (sub - little));
		}
		i = i - (sub - little);
		sub = (char *)little;
		i++;
	}
	return (NULL);
}
