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

/* strnstr locate a substring in a string */
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
