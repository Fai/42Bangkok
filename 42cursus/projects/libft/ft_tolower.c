/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:46:19 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 15:48:11 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tolower convert uppercase letters to lowercase, return converted c         */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
