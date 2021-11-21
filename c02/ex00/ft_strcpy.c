char	*ft_strcpy(char *dest, char *scr)
{
	int	c;

	c = 0;
	while (scr[c] != '\0')
	{
		dest[c] = scr[c];
		c ++;
	}
	dest[c] = '\0';
	return (dest);
}
