/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:10:53 by secaball          #+#    #+#             */
/*   Updated: 2022/02/16 12:10:59 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "hola 42";
	ft_putstr(str);
}*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
