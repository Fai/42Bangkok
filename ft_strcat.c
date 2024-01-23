char	*ft_strcat(char *dest, char *src)
{
	int	slen;

	slen = 0;
	while (*dest)
	{
		slen++;
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		slen++;
	}
	dest = dest - slen;
	return (dest);
}