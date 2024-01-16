void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a % *b;
	*a = *a / temp;
}