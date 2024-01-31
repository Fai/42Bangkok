/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 04:57:00 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f) (char*));

int    ft_is_first_x(char *str)
{
    if (*str == 'X')
        return (1);
    return (0);
}

int    main(void)
{
    int        length;
    char    **array;

    length = 5;
    array = malloc(length * sizeof(char *));
    array[0] = "O";
    array[1] = "X";
    array[2] = "O";
    array[3] = "X";
    array[4] = "O";
    printf("ft_count_if(...) = %d\n",
        ft_count_if(array, length, &ft_is_first_x));
}
*/

int	ft_count_if(char **tab, int length, int (*f) (char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}
