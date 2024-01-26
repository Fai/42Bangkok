/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:05:58 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/21 05:36:05 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strswp(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ft_strsort(int strcount, char **str)
{
	int	index;

	while (strcount > 1)
	{
		index = 1;
		while (index < strcount - 1)
		{
			if (ft_strcmp(str[index], str[index + 1]) > 0)
			{
				ft_strswp(&str[index], &str[index + 1]);
			}
			index++;
		}
		strcount--;
	}
}

int	main(int argc, char **argv)
{
	int		argindex;
	char	*argstr;

	argindex = 1;
	if (argc <= 1)
	{
		return (0);
	}
	ft_strsort(argc, argv);
	while (argindex < argc)
	{
		argstr = argv[argindex];
		while (*argstr != '\0')
		{
			write(1, argstr, 1);
			argstr++;
		}
		write(1, "\n", 1);
		argindex++;
	}
	return (0);
}
