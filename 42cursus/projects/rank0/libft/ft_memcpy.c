/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:38:24 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 22:48:08 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy copies n byte from memory area src to memory area dest              */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sptr;
	unsigned char	*dptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	sptr = (unsigned char *)src;
	dptr = (unsigned char *)dest;
	while (n > 0)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
		n--;
	}
	return (dest);
}
