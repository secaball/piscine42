/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:39:45 by secaball          #+#    #+#             */
/*   Updated: 2022/02/17 09:03:01 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int	i;

	str = "hola 42";
	ft_strlen(str);
	i = ft_strlen(str);
	printf("%d", i);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
