/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:43:13 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/17 15:27:01 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	slen;

	slen = 0;
	while (*dest)
	{
		slen++;
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		slen++;
	}
	*dest = '\0';
	dest = dest - slen;
	return (dest);
}
