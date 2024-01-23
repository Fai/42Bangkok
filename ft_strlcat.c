unsigned int	ft_strlen(char	*str)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*target;
	char			*addition;
	unsigned int	length;

	target = dest;
	addition = src;
	length = ft_strlen(dest);
	while (*target != '\0')
	{
		target++;
	}
	if (length > size)
		return (length + ft_strlen(addition));
	size = size - length;
	while (*addition != '\0' && size-- > 1)
	{
		*target = *addition;
		target++;
		addition++;
		length++;
	}
	*target = '\0';
	return (ft_strlen(target));
}