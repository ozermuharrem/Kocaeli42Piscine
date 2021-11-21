/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozer <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:31:32 by mozer             #+#    #+#             */
/*   Updated: 2021/10/10 18:29:35 by mozer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	grs;

	grs = *a;
	*a = *b;
	*b = grs;
}

void	siralama(int arr[], int l, int r)
{
	int	ozet;
	int	bol;
	int	i;

	if (l >= r)
		return ;
	ozet = arr[r];
	bol = l;
	i = l;
	while (i <= r)
	{
		if (arr[i] <= ozet)
		{
			ft_swap(&arr[bol], &arr[i]);
			bol ++;
		}
		i ++;
	}
	siralama(arr, l, bol - 2);
	siralama(arr, bol, r);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	r;

	l = 0;
	r = size - 1;
	siralama(tab, l, r);
}
