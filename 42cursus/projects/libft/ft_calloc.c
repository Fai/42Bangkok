/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:36:34 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 17:18:03 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calloc - allocate and free dynamic memory                                  */
/* calloc allocate memory for array of nmemb elements of size bytes           */
/* return a pointer to the allocated memory                                   */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb < 0 || size < 0 || (nmemb && SIZE_MAX / nmemb < size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}
