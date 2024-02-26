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

/* strjoin allocate and return a new string which concat of prefix s1 and s2  */
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
