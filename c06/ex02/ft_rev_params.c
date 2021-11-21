#include	<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = argc - 1;
	a = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			a = 0;
			while (argv[i][a] != '\0')
			{
				write(1, &argv[i][a], 1);
				a++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
