/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 04:57:02 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp) (char *, char *));

int        main(void)
{
    int        index;
    char    **tab;

    tab = malloc(8 * sizeof(char *));
    tab[0] = strdup("hello");
    tab[1] = strdup("world");
    tab[2] = strdup("a");
    tab[3] = strdup("aa");
    tab[4] = strdup("ba");
    tab[5] = strdup("ab");
    tab[6] = strdup("z");
    tab[7] = 0;
    index = 0;
    while (tab[index])
    {
        printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
        index++;
    }
    ft_advanced_sort_string_tab(tab, &ft_strcmp);
    printf("\n");
    index = 0;
    while (tab[index])
    {
        printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
        index++;
    }
}
*/

void	ft_advanced_sort_string_tab(char **tab, int (*cmp) (char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]) < 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
