/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:24:52 by bperez-a          #+#    #+#             */
/*   Updated: 2024/01/20 09:28:10 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

bool	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (true);
		i++;
	}
	if (c == '\0')
		return (true);
	return (false);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_sep(str[i], charset)) && is_sep(str[i + 1], charset))
			total++;
		i++;
	}
	return (total);
}

void	write_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!(is_sep(src[i], charset)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		word_total;

	word_total = 0;
	i = 0;
	arr = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	arr[count_words(str, charset)] = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!(is_sep(str[i + j], charset)))
				j++;
			arr[word_total] = malloc(j + 1);
			write_word(arr[word_total], str + i, charset);
			i += j;
			word_total++;
		}
	}
	return (arr);
}
