/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:09:30 by secaball          #+#    #+#             */
/*   Updated: 2022/03/02 19:30:59 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0)
		return (0);
	while (nb >= 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
}*/
