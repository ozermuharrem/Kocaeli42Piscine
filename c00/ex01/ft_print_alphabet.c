#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{	
	char	a;

	a = 0;
	while (a <= 'z')
	{
		ft_putchar(a);
		a ++;
	}
}
