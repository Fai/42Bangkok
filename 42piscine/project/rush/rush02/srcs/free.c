/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:26:47 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/28 11:30:56 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_free_dict(t_dict *dict)
{
	int	index;

	index = 0;
	while (dict[index].key != 0)
	{
		free(dict[index].key);
		free(dict[index].value);
		index++;
	}
	free(dict);
}

void	ft_free_split(char **result)
{
	int	index;

	index = 0;
	while (result[index])
	{
		free(result[index]);
		index++;
	}
	free(result);
}
