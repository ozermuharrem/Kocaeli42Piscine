#include <unistd.h>

void	ft_is_negative(int n)
{
	char	deger;

	deger = 'P';
	if (n < 0)
	{
		deger = 'N';
	}
	 write(1, &deger, 1);
}
