/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:11:20 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 16:28:26 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strlcat appends the string src to the end of dst                           */
/* It will append at most size - ft_strlen(dst) - 1 bytes, NUL-terminating    */
/* return initial length of dst plus the length of src                        */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst == NULL && size <= 0)
		return (0);
	if (size <= dst_len)
		return (size + src_len);
	while ((dst_len + i) < (size - 1) && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
