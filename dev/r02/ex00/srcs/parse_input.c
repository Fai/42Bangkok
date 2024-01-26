/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:51:47 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/26 21:00:47 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ft.h"

char	**parse_input(char *str)
{
	char	**parsed;
	int		len;
	int		first_group_size;
	int		num_groups;
	int		i;

	len = ft_strlen(str);
	num_groups = (len + 2) / 3;
	first_group_size = len % 3;
	if (first_group_size == 0)
		first_group_size = 3;
	if (len < 3)
		first_group_size = len;
	parsed = malloc((num_groups + 1) * sizeof(char *));
	parsed[0] = malloc((first_group_size + 1) * sizeof(char));
	ft_strncpy_nt(parsed[0], str, first_group_size);
	i = 1;
	while (i < num_groups)
	{
		parsed[i] = malloc(4 * sizeof(char));
		ft_strncpy_nt(parsed[i], &str[first_group_size], 3);
		first_group_size += 3;
		i++;
	}
	return (parsed);
}
