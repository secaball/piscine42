/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:02:06 by secaball          #+#    #+#             */
/*   Updated: 2022/02/16 10:09:12 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("Dividendo: %d\nDivisor: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Resultado división: %d\nResultado resto: %d\n", a, b);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num1 / num2;
	*b = num1 % num2;
}
