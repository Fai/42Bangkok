/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 13:42:51 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_foreach(tab, 1337, &ft_putnbr); */
/*
#include <stdio.h>
#include <stdlib.h>

void	x_ft_put_number(int number)
{
	prtintf("%d\n", number);
}
*/
void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
int	main(void)
{
	int	index;
	int	*tab;
	int	length;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	ft_foreach(tab, length, &x_ft_put_number);
}
*/
