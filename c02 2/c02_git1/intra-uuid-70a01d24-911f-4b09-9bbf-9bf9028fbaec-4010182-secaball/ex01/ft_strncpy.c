/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:00:09 by secaball          #+#    #+#             */
/*   Updated: 2022/02/20 15:22:38 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hola 42";
	char	dest[] = "";
	unsigned int	n;
	unsigned int	i;

	i = 0;
	n = 8;
	ft_strncpy(dest, src, n);
	while (i < n)
	{
		write (1, &dest[i], 1);
		i++;
	}
}*/
