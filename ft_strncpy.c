char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	scount;
	unsigned int	dcount;

	scount = 0;
	dcount = 0;
	while (scount < n)
	{
		if (*src)
		{
			*dest = *src;
			src++;
			scount++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		dcount++;
	}
	src = src - scount;
	dest = dest - dcount;
	return (dest);
}