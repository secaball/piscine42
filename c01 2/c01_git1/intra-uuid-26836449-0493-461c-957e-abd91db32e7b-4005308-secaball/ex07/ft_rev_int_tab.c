/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:04:07 by secaball          #+#    #+#             */
/*   Updated: 2022/02/16 15:44:50 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];
	int	size;

	tab[0] = 12345;
	size = 5;
	ft_rev_int_tab(tab, size);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2;
	int	n;
	int	p;

	p = size - 1;
	n = 0;
	printf("%d\n\n", *tab);
	while (n <= (size / 2))
	{
		tab2 = tab[n];
		tab[n] = tab[p];
		tab[p] = tab2;
		n++;
		p--;
	}
	printf("%d ", *tab);
}
