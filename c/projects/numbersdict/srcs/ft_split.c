/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:36:43 by jichompo          #+#    #+#             */
/*   Updated: 2024/01/28 18:58:46 by satapee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_charset(char c, char *charset)
{
	if (c == '\0')
		return (1);
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	word_count;

	word_count = 0;
	while (*str)
	{
		if (ft_is_charset(*str, charset))
		{
			str++;
		}
		else if (!ft_is_charset(*str, charset))
		{
			if (ft_is_charset(*(str + 1), charset))
				word_count++;
			str++;
		}
	}
	return (word_count);
}

char	*ft_create_word(char *str, char *charset)
{
	char	*result;
	int		len;
	int		index;

	len = 0;
	index = 0;
	while (!ft_is_charset(*str, charset))
	{
		len++;
		str++;
	}
	result = malloc(sizeof(char) + len + 1);
	str -= len;
	while (!ft_is_charset(*str, charset))
	{
		result[index] = *str;
		index++;
		str++;
	}
	result[index] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_count;
	int		index;
	int		len;

	word_count = ft_word_count(str, charset);
	result = malloc(sizeof(char *) * (word_count + 1));
	index = 0;
	while (index < word_count && *str)
	{
		len = 0;
		while (ft_is_charset(*str, charset))
			str++;
		while (!ft_is_charset(*(str + len), charset) && *(str + len))
			len++;
		if (len > 0)
		{
			result[index] = ft_create_word(str, charset);
			index++;
		}
		str += len;
	}
	result[word_count] = 0;
	return (result);
}
