/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:06:35 by rpithaks          #+#    #+#             */
/*   Updated: 2024/01/31 13:42:09 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_atoi(char	*str)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (sign * num);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	ft_math_operation(int a, int b, char op)
{
	int	result;

	result = 0;
	if (op == '+')
		result = ft_add(a, b);
	if (op == '-')
		result = ft_sub(a, b);
	if (op == '*')
		result = ft_mul(a, b);
	if (op == '/')
		result = ft_div(a, b);
	if (op == '%')
		result = ft_mod(a, b);
	return (result);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		res;
	char	op;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = argv[2][0];
	res = ft_math_operation(a, b, op);
	if ((op == '/' || op == '%') && b == 0)
		return (0);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
