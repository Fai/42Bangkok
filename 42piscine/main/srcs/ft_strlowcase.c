/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:10:30 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/15 16:11:56 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
		count++;
	}
	str = str - count;
	return (str);
}
