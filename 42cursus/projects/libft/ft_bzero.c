/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@studnet.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:34:42 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 18:19:58 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* bzero erase the data in the n bytes of the memory start at s by zero '\0'  */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		n--;
		p++;
	}
}
