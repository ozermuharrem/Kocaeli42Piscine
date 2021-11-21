#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int x, int y)
{
	char	u;
	char	d;

	if (x <= 9)
	{
		u = x + 48;
		ft_putchar2('0', u);
	}
	else if (x <= y)
	{
		u = (x % 10) + 48;
		d = (x / 10) + 48;
		ft_putchar2(d, u);
	}
}

void	ft_catint(int bir, int iki)
{
	ft_putint(bir, 98);
	write(1, " ", 1);
	ft_putint(iki, 99);
	if (bir != 98 || iki != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_catint(f, s);
			s++;
		}
		f++;
	}
}
