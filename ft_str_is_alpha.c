int	ft_str_is_alpha(char	*str)
{
	while (*str)
	{
		if (*str < 65 || *str > 122 || (*str >= 91 && *str <= 96))
		{
			return (0);
		}
		str++;
	}
	return (1);
}