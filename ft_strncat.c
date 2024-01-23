char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count;

	count = 0;
	while (*dest)
	{
		count++;
		dest++;
	}
	while (nb > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
		nb--;
	}
	dest = dest - count;
	return (dest);
}