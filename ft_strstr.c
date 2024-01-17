char	*ft_strstr(char	*str, char	*tofind)
{
	char	*src;
	char	*seek;

	src = str;
	if (*tofind == '\0')
		return (str);
	while (*src)
	{
		seek = tofind;
		while (*src == *seek)
		{
			src++;
			seek++;
			if (*seek == '\0')
			{
				src = src - (seek - tofind);
				return (src);
			}
		}
		src = src - (seek - tofind);
		src++;
	}
	return (0);
}