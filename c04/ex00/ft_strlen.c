int	ft_strlen(char *str)
{
	int	b;

	b = 0;
	while (*str != '\0')
	{
		b ++;
		str ++;
	}
	return (b);
}
