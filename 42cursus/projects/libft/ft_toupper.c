/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:43:41 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/14 15:48:42 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* toupper() convert lowercase letters to uppercase, return the converted c   */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
