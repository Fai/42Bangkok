/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:19:31 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/16 14:37:49 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char *str)
{
	if (*str >= 97 && *str <= 122)
	{
		return (3);
	}
	if (*str >= 65 && *str <= 90)
	{
		return (2);
	}
	if (*str >= 48 && *str <= 57)
	{
		return (1);
	}
	return (0);
}

void	convert_char(char *str, int flag, int type)
{
	if (flag == 1 && type == 3)
	{
		*str = *str - 32;
	}
	if (flag == 0 && type == 2)
	{
		*str = *str + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	type;
	int	count;

	flag = 1;
	count = 0;
	while (*str)
	{
		type = is_alphanumeric(str);
		if (type)
		{
			convert_char(str, flag, type);
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		str++;
		count++;
	}
	str = str - count;
	return (str);
}
