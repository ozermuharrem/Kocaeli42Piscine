int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (res > res * nb)
		return (0);
	else if (power > 1)
		return (res * ft_recursive_power(res, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (res);
}
