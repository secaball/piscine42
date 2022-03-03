/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:47:29 by secaball          #+#    #+#             */
/*   Updated: 2022/02/14 15:16:24 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('S');
	return (0);
}
*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
