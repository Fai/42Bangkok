#include <unistd.h>

void	ft_print_number(int num)
{
	char	temp;

	temp = 48;
	if (num < 10)
	{
		write(1, &temp, 1);
		temp = temp + num;
		write(1, &temp, 1);
	}
	else
	{
		temp = (num / 10) + 48;
		write(1, &temp, 1);
		temp = (num % 10) + 48;
		write(1, &temp, 1);
	}
}

void	ft_print_two_num(int num1, int num2)
{
	ft_print_number(num1);
	write(1, " ", 1);
	ft_print_number(num2);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_print_two_num(number1, number2);
			if (number1 < 98)
			{
				write(1, ", ", 2);
			}
			number2++;
		}
		number1++;
	}
}