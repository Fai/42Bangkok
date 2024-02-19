/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_input2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:55:54 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/28 15:56:33 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_valid_start(char *str)
{
	while (*str)
	{
		if ((*str >= '0' && *str <= '9') || (*str == ' '))
			str++;
		else
			return (0);
	}
	return (1);
}

int	ft_get_offset(int size)
{
	if (size >= 3)
		return (3);
	if (size == 2)
		return (2);
	return (1);
}
