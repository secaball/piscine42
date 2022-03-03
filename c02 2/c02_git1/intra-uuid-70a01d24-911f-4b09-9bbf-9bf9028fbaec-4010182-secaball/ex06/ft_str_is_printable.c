/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:38:09 by secaball          #+#    #+#             */
/*   Updated: 2022/02/20 15:34:43 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] < 32 || str[i] > 126)
	{
		return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("º"));
}*/
