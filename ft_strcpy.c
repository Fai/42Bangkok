/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:53:22 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/15 13:25:42 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char *src)
{
	int	count;

	count = 0;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	dest = dest - count;
	return (dest);
}
