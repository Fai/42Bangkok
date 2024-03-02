/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:30:43 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/02 16:08:30 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_printf.c
 * @brief A simple implementation of printf handle csoduyxX%
 * @param format The format string
 * @param ... The arguments to be printed
 * @return The number of characters printed
 * @note allow fn: malloc, free, write, va_start, va_arg, va_copy, va_end
 * @note %c char, $s string, %p pointer, %d int, %i int, %u unsigned int, 
 * %x hex, %X HEX, %% percent sign
 * @note bonus manage flags: '-0.' and field minimum width as well as "# +"
 */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
				ft_putnbr_fd(va_arg(args, int), count);
			else if (format[i] == 's')
				ft_putstr_fd(va_arg(args, char *), count);
			else if (format[i] == 'c')
				ft_putchar_fd(va_arg(args, int), count);
			else if (format[i] == 'u')
				ft_putnbr_fd(va_arg(args, unsigned int), count);
			else if (format[i] == 'x')
				ft_putstr_fd(ft_itoa(va_arg(args, int)), count);
			else if (format[i] == 'X')
				ft_putstr_fd(ft_itoa(va_arg(args, int)), count);
			else if (format[i] == 'p')
				ft_putstr_fd(ft_itoa(va_arg(args, int)), count);
			else if (format[i] == '%')
				ft_putchar_fd('%', count);
			else
				ft_putchar_fd(format[i], count);
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
}

// int	main(void)
// {
// 	ft_printf("Hello, %s!\n", "world");
// 	ft_printf("The number is %d\n", 42);
// 	ft_printf("The character is %c\n", 'A');
// 	return (0);
// }