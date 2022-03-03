/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:49:07 by secaball          #+#    #+#             */
/*   Updated: 2022/02/23 16:10:39 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	cont(char *str)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			j++;
		else if (str[i] == '+')
			z++;
		i++;
	}
	if (z >= j)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	y;

	res = 0;
	y = cont(str);
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] < '0' || str[i] > '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	if (y == 1)
		return (res);
	else
		return (res * -1);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("  --+ ++---+123*++++ase43"));
}*/
