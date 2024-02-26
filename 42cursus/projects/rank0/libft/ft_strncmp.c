/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:25:14 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 18:50:38 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncmp compare two strings at most only the first n bytes of s1 and s2    */
/* return integer lessthan */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
