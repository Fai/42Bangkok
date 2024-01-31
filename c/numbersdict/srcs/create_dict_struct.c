/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dict_struct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 09:08:29 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/28 13:20:30 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_os_dict(t_dict **dict, int argc, char **argv)
{
	char	buffer[BUFF_SIZE];
	char	**result;
	int		fd;
	int		index;

	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	index = read(fd, buffer, BUFF_SIZE);
	buffer[index] = '\0';
	close(fd);
	index = 0;
	result = ft_split(buffer, "\n");
	while (result[index])
		index++;
	*dict = malloc(sizeof(t_dict) * index + 1);
	ft_create_list(*dict, result);
	ft_free_split(result);
	return (index);
}

void	ft_create_key(t_dict *dict, char *str)
{
	int	size;
	int	index;

	size = ft_strlen(str);
	dict->key = malloc(sizeof(char) * size + 1);
	index = 0;
	while (*str == ' ')
		str++;
	while ((str[index] >= '0' && str[index] <= '9'))
	{
		dict->key[index] = str[index];
		index++;
	}
	dict->key[index] = '\0';
}

void	ft_create_value(t_dict *dict, char *str)
{
	int	size;
	int	index;

	while (*str != ':' && *str != '\0')
		str++;
	if (*str == ':')
		str++;
	while (*str == ' ')
		str++;
	size = ft_strlen(str);
	dict->value = malloc(sizeof(char) * size + 1);
	index = 0;
	while (str[index])
	{
		dict->value[index] = str[index];
		index++;
		size--;
	}
	dict->value[index] = '\0';
}

void	ft_create_list(t_dict *dict_list, char **result)
{
	int	index;

	index = 0;
	while (result[index])
	{
		ft_create_key(dict_list, result[index]);
		ft_create_value(dict_list, result[index]);
		index++;
		dict_list++;
	}
	dict_list->key = 0;
}

char	*get_value(t_dict *dict_list, int size, char *key)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(key, dict_list[i].key) == 0)
			return (dict_list[i].value);
		i++;
	}
	return (NULL);
}
