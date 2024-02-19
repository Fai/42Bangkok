/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:40:12 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/16 18:41:47 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	str = str - len;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	srcsize;

	count = 0;
	srcsize = ft_strlen(src);
	if (size == 0)
	{
		return (srcsize);
	}
	while (*src && count < size - 1)
	{
		if (*src)
		{
			*dest = *src;
		}
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	src = src - srcsize;
	dest = dest - count;
	return (srcsize);
}
