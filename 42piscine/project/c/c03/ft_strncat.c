/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:46:57 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/17 15:27:40 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count;

	count = 0;
	while (*dest)
	{
		count++;
		dest++;
	}
	while (nb > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
		nb--;
	}
	*dest = '\0';
	dest = dest - count;
	return (dest);
}
