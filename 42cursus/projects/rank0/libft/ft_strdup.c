/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:47:11 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 17:33:00 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_strdup (recreate libc function)
/**
 * @brief Duplicate a string.
 * 
 * The original function is part of the <string.h> standard library.
 * Memory for the duplicate string is obtained with malloc(), and can be freed
 *  with free().
 * 
 * @param s A pointer to a string.
 * @return A pointer to a new string which is a duplicate of the string s.
 * @return If insufficient memory is available, returns NULL and sets errno to
 *  indicate the cause of the error (‘ENOMEM’; insufficient memory available to
 *  allocate duplicate string).
 * 
 * @note Depends on malloc() from <stdlib.h>.
 */
//char *strdup(const char *s);
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
