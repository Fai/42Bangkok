/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:49:33 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/01 23:21:40 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strchr return a pointer to the first occurrence of char c in the string s  */
char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (*p != '\0')
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p++;
	}
	if (*p == (unsigned char)c)
		return ((char *)p);
	return (0);
}
