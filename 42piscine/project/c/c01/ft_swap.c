/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:49:37 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/30 23:32:28 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	value_a;
	int	value_b;			

	value_a = *a;
	value_b = *b;
	*a = value_b;
	*b = value_a;
}
