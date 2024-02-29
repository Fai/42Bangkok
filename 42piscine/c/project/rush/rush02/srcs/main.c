/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:25:23 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/29 19:07:40 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_start(t_dict *dict, int dict_size, t_triplets *start)
{
	ft_display_result(dict, dict_size, start);
	write (1, "\n", 1);
}

int	ft_exit(int status, char *msg, t_triplets *start, t_dict *dict)
{
	free (start);
	if (dict)
	{
		ft_free_dict(dict);
	}
	ft_putstr(msg);
	return (status);
}

int	main(int argc, char **argv)
{
	t_dict		*dict;
	t_triplets	*start;
	int			dict_size;
	int			start_size;

	if (argc > 3 || argc < 2)
		return (1);
	dict_size = ft_os_dict(&dict, argc, argv);
	start_size = ft_get_start(argc, argv, &start);
	if (!start)
		return (ft_exit(1, "Input Error!\n", start, dict));
	if ((dict_size == -1) || ((start_size > 1)
			&& !ft_get_unit(dict, dict_size, start[start_size - 1].index)))
		return (ft_exit(1, "Dict error!\n", start, dict));
	ft_start(dict, dict_size, start);
	return (ft_exit(0, "", start, dict));
}
