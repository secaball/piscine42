/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 22:55:37 by secaball          #+#    #+#             */
/*   Updated: 2022/03/03 13:14:00 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	if (power == 1)
		return (nb);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 5));
}*/
