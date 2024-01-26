/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:12 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/24 20:30:31 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*tofind)
{
	char	*src;
	char	*seek;

	src = str;
	if (*tofind == '\0')
		return (str);
	while (*src)
	{
		seek = tofind;
		while (*src == *seek)
		{
			src++;
			seek++;
			if (*seek == '\0')
			{
				src = src - (seek - tofind);
				return (src);
			}
		}
		src = src - (seek - tofind);
		src++;
	}
	return (0);
}
