/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:50:29 by secaball          #+#    #+#             */
/*   Updated: 2022/02/15 17:43:13 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	primero;
	int	segundo;

	primero = 10;
	segundo = 20;
	printf("Valor primer número: %d\n", primero);
	printf("Valor segundo número: %d\n", segundo);
	ft_swap (&primero, &segundo);
	printf("Valor primer número: %d\n", primero);
	printf("Valor segundo número: %d\n", segundo);
}*/

void	ft_swap(int *a, int *b)
{
	int	container;

	container = *a;
	*a = *b;
	*b = container;
}
