/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:32:49 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/28 16:07:23 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_parse_number(char *str)
{
	int	num;

	num = 0;
	while (*str && is_numchar(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

void	ft_print_to_screen(t_dict *dict, int dict_size,
			t_triplets *trip, int len)
{
	int	num;
	int	i;

	i = len;
	while (i > 0)
	{
		i--;
		num = ft_parse_number(trip[i].triplet);
		if (num > 0)
		{
			if (i != len -1)
				ft_putstr(", ");
			put_word(dict, dict_size, num);
			if (i != 0)
			{
				ft_putstr(" ");
				put_unit(dict, dict_size, trip[i].index);
			}
		}
	}
}

void	ft_display_result(t_dict *dict, int dict_size, t_triplets *trip)
{
	int	i;
	int	len;

	i = 0;
	while (trip[i].index != -1)
		i++;
	len = i;
	if (len == 1)
	{
		put_word(dict, dict_size, ft_parse_number(trip[0].triplet));
		return ;
	}
	ft_print_to_screen(dict, dict_size, trip, len);
}
