/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satapee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:24:07 by satapee           #+#    #+#             */
/*   Updated: 2024/01/28 15:50:05 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

// put_word take number between 0 to 999 
// and print the word parsed from dict file.

void	ft_put_ty(t_dict *dict, int size, int nb, char buff[4])
{
	ft_putstr(get_value(dict, size, nb_to_str(buff, 4, (nb / 10) * 10)));
	write (1, "-", 1);
	ft_putstr(get_value(dict, size, nb_to_str(buff, 4, nb % 10)));
}

void	put_word(t_dict *dict, int size, int nb)
{
	char	*word;
	char	buff[4];

	word = get_value(dict, size, nb_to_str(buff, 4, nb));
	if (word && nb != 100)
		ft_putstr(word);
	else if (nb < 20)
		ft_putstr(get_value(dict, size, nb_to_str(buff, 4, nb)));
	else if (20 <= nb && nb < 100)
		ft_put_ty(dict, size, nb, buff);
	else
	{
		ft_putstr(get_value(dict, size, nb_to_str(buff, 4, nb / 100)));
		ft_putstr(" ");
		ft_putstr(get_value(dict, size, "100"));
		if (nb % 100 != 0)
		{
			ft_putstr(" and ");
			put_word(dict, size, nb % 100);
		}
	}
}

char	*ft_get_unit(t_dict *dict, int size, int index)
{
	char	*word;
	char	*key;
	int		key_size;	
	int		i;

	if (index < 1)
		return ((void *)0);
	key_size = index * 3 + 2;
	key = malloc(key_size);
	if (!key)
		return ((void *)0);
	i = key_size - 1;
	key[i] = '\0';
	while (i > 1)
	{
		i--;
		key[i] = '0';
	}
	key[0] = '1';
	word = get_value(dict, size, key);
	free(key);
	return (word);
}

void	put_unit(t_dict *dict, int size, int index)
{
	ft_putstr(ft_get_unit(dict, size, index));
}

char	*nb_to_str(char *buff, int size, int nb)
{
	if (size > 0)
	{
		size--;
		buff[size] = '\0';
	}
	if (nb == 0 && size > 0)
	{
		size--;
		buff[size] = '0';
	}
	while (size > 0 && nb > 0)
	{
		size--;
		buff[size] = nb % 10 + '0';
		nb /= 10;
	}
	return (&buff[size]);
}
