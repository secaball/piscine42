/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:44:23 by secaball          #+#    #+#             */
/*   Updated: 2022/02/16 09:50:31 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	num1;
	int	num2;
	int	resuldiv;
	int	resulmod;

	num1 = 10;
	num2 = 5;
	ft_div_mod(num1, num2, &resuldiv, &resulmod);
	printf("El resultado de DIV es: %d\n", resuldiv);
	printf("El resultado de MOD es: %d\n", resulmod);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
