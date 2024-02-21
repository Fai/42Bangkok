/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:38:24 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/21 15:16:39 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy copies n byte from memory area src to memory area dest              */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*sptr;
	char	*dptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	sptr = (char *)src;
	dptr = (char *)dest;
	while (n > 0)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
		n--;
	}
	return (dest);
}
