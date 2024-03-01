/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:34:49 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:43:47 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memchr scan initial n bytes of memory pointed by s for first instance of c */
/* return pointer to the matching byte or NULL if does not occur              */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (0);
}
