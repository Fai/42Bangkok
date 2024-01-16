char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
		count++;
	}
	str = str - count;
	return (str);
}