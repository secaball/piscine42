/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:04:07 by secaball          #+#    #+#             */
/*   Updated: 2022/02/17 09:02:23 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	size;

	size = 4;
	ft_rev_int_tab(tab, size);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2;
	int	n;
	int	p;

	p = size - 1;
	n = 0;
	while (n < (size / 2))
	{
		tab2 = tab[n];
		tab[n] = tab[p];
		tab[p] = tab2;
		n++;
		p--;
	}
}
