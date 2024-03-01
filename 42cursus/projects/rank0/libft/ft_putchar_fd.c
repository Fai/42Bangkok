/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:30:44 by rpithaks          #+#    #+#             */
/*   Updated: 2024/02/20 20:33:34 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FUNCTION ft_putchar_fd (novel function)
/**
 * @brief Outputs a character to a specified file descriptor.
 * 
 * Outputs the character ‘c’ to the given file descriptor.
 * 
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 * 
 * @note Depends on write() from <unistd.h>.
 */
//void	ft_putchar_fd(char c, int fd);

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
