/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:04:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/21 04:07:56 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combo(int n, int number[])
{
	int	index;
	int	last;

	index = 0;
	while (index < n)
	{
		ft_putchar(48 + number[index]);
		index++;
	}
	index = n - 1;
	last = 1;
	while (index >= 0)
	{
		if (number[index] != 9 - (n - 1 - index))
		{
			last = 0;
			break ;
		}
		index--;
	}
	if (!last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int curr, int number[], int st_index)
{
	int	index;
	int	max;

	if (curr == n)
	{
		ft_write_combo(n, number);
	}
	else
	{
		max = 10 - (n - curr);
		index = st_index + 1;
		while (index <= max)
		{
			number[curr] = index;
			ft_print_combn_recursive(n, curr + 1, number, index);
			index++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	number[10];
	int	index;

	index = 0;
	while (index < n)
	{
		number[index] = 0;
		index++;
	}
	ft_print_combn_recursive(n, 0, number, -1);
}
