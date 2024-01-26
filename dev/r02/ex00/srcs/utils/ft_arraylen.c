/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:55:25 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/27 01:59:46 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_arraylen(char **array)
{
	int	length;

	length = 0;
	while (array[length] != NULL)
	{
		length++;
	}
	return (length);
}
