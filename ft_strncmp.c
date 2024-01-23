int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			if (*s1 > *s2)
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		n--;
	}
	return (0);
}