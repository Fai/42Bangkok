char	*ft_strcpy(char	*des, char *src)
{
	int	count;

	count = 0;
	while (*src)
	{
		*des = *src;
		des++;
		src++;
		count++;
	}
	*des = '\0';
	des = des - count;
	return (des);
}