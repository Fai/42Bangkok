/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 04:14:42 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/26 22:29:41 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAX_LENGTH 16

void	ft_print_hex_address(unsigned long num);
void	ft_print_hex_value(char *str, unsigned int size);
void	ft_print_ascii_value(char *str, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		len;
	void	*original_address;

	original_address = addr;
	while (1)
	{
		if (size > MAX_LENGTH)
			len = MAX_LENGTH;
		else
			len = size;
		ft_print_hex_address((unsigned long) addr);
		write(1, ":", 1);
		ft_print_hex_value(addr, len);
		write(1, " ", 1);
		ft_print_ascii_value(addr, len);
		write(1, "\n", 1);
		if (size <= MAX_LENGTH)
			break ;
		size -= MAX_LENGTH;
		addr += len;
	}
	return (original_address);
}

void	ft_print_hex_address(unsigned long num)
{
	char	*hex;
	char	buff[16];
	int		i;

	hex = "0123456789abcdef";
	i = 16;
	while (num > 0 && i > 0)
	{
		i--;
		buff[i] = hex[num % 16];
		num /= 16;
	}
	while (i > 0)
	{
		i--;
		buff[i] = '0';
	}
	write(1, buff, 16);
}

void	ft_print_hex_value(char *str, unsigned int size)
{
	char			*hex;
	unsigned int	i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < MAX_LENGTH)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i < size)
		{
			write(1, &hex[(str[i] >> 4) & 0xf], 1);
			write(1, &hex[str[i] & 0xf], 1);
		}
		else
			write(1, "  ", 2);
		i++;
	}
}

void	ft_print_ascii_value(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] < 32 || str[i] == 127)
			write(1, ".", 1);
		else
			write(1, str + i, 1);
		i++;
	}
}
