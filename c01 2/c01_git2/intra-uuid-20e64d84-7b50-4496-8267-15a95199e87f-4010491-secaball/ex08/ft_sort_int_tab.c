/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:02:30 by secaball          #+#    #+#             */
/*   Updated: 2022/02/17 09:00:48 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {4, 1, 9, 3, 6, 8, 2};
	int	size;

	size = 7;
	for(int i = 0; i < size; i++)
		printf("%d", tab[i]);
	printf("\n");
	ft_sort_int_tab(tab, size);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	z;
	int	container;

	i = 0;
	z = 0;
	while (z < size - 1)
	{
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				container = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = container;
				i = 0;
			}
			else
				i++;
		}
		z++;
	}	
}
