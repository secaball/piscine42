/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:19:41 by secaball          #+#    #+#             */
/*   Updated: 2022/02/26 22:54:49 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 4));
}*/
