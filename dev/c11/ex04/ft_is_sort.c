/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 13:42:29 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f) (int, int));

int        ft_less_than(int a, int b)
{
    return (b - a);
}

int        ft_more_than(int a, int b)
{
    return (a - b);
}

int        main(void)
{
    static int    tabx[] = { 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7 };
    int            index;
    int            *tab;
    int            length;

    length = 10;
    tab = malloc(length * sizeof(int));
    index = 0;
    while (index < length)
    {
        tab[index] = index;
        index++;
    }
    printf("ft_is_sorted(1..10) = %d\n", ft_is_sort(tab, length, &ft_less_than));
    index = 0;
    while (index < length)
    {
        tab[length - 1 - index] = index;
        index++;
    }
printf("ft_is_sorted(10..1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
tab[5] = 100;
printf("ft_is_sorted(10.100.1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
tab[5] = 4;
tab[9] = 100;
printf("ft_is_sorted(10.1.100) = %d\n", ft_is_sort(tab, length, &ft_more_than));
printf("ft_is_sorted(.tabx. = %d\n", ft_is_sort(tabx, 13, &ft_more_than));
printf("ft_is_sorted(.tabx. = %d\n", ft_is_sort(tabx, 13, &ft_less_than));
}
*/

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}
