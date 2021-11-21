void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	yty;
	int	dky;

	dky = 1;
	while (dky <= y && x > 0)
	{
		yty = 1;
		while (yty <= x)
		{
			if ((yty == 1 && dky == 1) || (dky == y && yty == 1))
				ft_putchar('A');
			else if ((yty == x && dky == 1) || (yty == x && dky == y))
				ft_putchar('C');
			else if ((yty == 1) || (yty == x) || (dky == 1) || (dky == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			yty++;
		}
		ft_putchar('\n');
		dky++;
	}
}
