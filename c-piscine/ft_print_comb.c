/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:40:57 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/12 17:06:16 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_three_digits(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c1 == 55 && c2 == 56 && c3 == 57)
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = num1 + 1;
		while (num2 <= 56)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				ft_print_three_digits(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
