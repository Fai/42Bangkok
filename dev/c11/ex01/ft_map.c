/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 13:42:25 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>
int		*ft_map(int *tab, int length, int (*f) (int));
int		ft_square(int number);

int		ft_square(int number)
{
    return (number * number);
}

int    main(void)
{
    int    index;
    int    *tab;
    int    length;
    int    *results;

    length = 10;
    tab = malloc(length * sizeof(int));
    index = 0;
    while (index < length)
    {
        tab[index] = index;
        index++;
    }
    results = ft_map(tab, length, &ft_square);
    index = 0;
    while (index < length)
    {
        printf("[mapped] square(%d) = %d\n", index, results[index]);
        index++;
    }
}
*/

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
