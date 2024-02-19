/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 04:51:41 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
int	ft_any(char **tab, int (*f) (char*));

int    ft_function(char *str)
{
    if (*str == 'X')
        return (1);
    return (0);
}

int    main(void)
{
    char    **array;

    array = malloc(5 * sizeof(char *));
    array[0] = "O";
    array[1] = "O";
    array[2] = "O";
    array[3] = "X";
    array[4] = 0;
    printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
}
*/

int	ft_any(char **tab, int (*f) (char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
