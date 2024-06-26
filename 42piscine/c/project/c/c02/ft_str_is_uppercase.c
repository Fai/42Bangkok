/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:39:39 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/15 15:40:41 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
