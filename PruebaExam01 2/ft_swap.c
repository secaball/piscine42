/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:54:41 by secaball          #+#    #+#             */
/*   Updated: 2022/02/17 18:14:48 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int b;

	a = 5;
	b = 3;
	printf("Primer número: %d\n", a);
	printf("Segundo número: %d\n", b);
	ft_swap(&a, &b);
	printf("Primer valor: %d\n", a);
	printf("Segundo valor: %d\n", b);
}

void	ft_swap(int *a, int *b)
{
	int	aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
