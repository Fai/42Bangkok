/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:30:44 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 20:34:18 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_putnbr_fd (novel function)
/**
 * @brief Outputs an integer to a specified file descriptor.
 * 
 * Outputs the integer ‘n’ to the given file descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 * 
 * @note Depends on write() from <unistd.h>.
 */
//void	ft_putnbr_fd(int n, int fd);

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(48 + n % 10, fd);
	}
}
