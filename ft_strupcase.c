char	*ft_strupcase(char	*str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
		count++;
	}
	str = str - count;
	return (str);
}