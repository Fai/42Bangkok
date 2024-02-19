/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_nt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:30:01 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/26 17:31:42 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy_nt(char *dest, char *src, unsigned int n)
{
	unsigned int	position;

	position = 0;
	while (position < n && src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	while (position < n)
	{
		dest[position] = '\0';
		position++;
	}
	dest[position] = '\0';
	return (dest);
}
