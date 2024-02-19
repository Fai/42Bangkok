/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 17:35:11 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_mul(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	else
		return (a / b);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	else
		return (a % b);
}
