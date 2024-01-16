char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	type;
	int	count;

	flag = 1;
	count = 0;
	while (*str)
	{
		type = is_alphanumeric(str);
		if (type)
		{
			convert_char(str, flag, type);
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		str++;
		count++;
	}
	str = str - count;
	return (str);
}