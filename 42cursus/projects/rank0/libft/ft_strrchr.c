/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:10:13 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/19 23:17:41 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strrchr return a pointer to the last occurence of the character c in str s */
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (*ret != '\0')
	{
		ret++;
	}
	while (ret >= (unsigned char *) s)
	{
		if (*ret == (unsigned char) c)
			return ((char *)ret);
		ret--;
	}
	return (0);
}
