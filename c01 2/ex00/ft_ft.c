/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:06:42 by secaball          #+#    #+#             */
/*   Updated: 2022/02/16 09:35:38 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 0;
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", nbr);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
