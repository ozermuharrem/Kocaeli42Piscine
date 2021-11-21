#include<unistd.h>

void	ft_putchar(char r)
{
	write(1, &r, 1);
}

void	ft_print_numbers(void)
{
	char	r;

	r = '0';
	while (r <= '9')
	{
		ft_putchar(r++);
	}
}
