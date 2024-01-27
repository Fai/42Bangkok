/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:08:51 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/27 23:06:25 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (n * n < (unsigned int)nb)
	{
		n++;
	}
	if (n * n == (unsigned int)nb)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
