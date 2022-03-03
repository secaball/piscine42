/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:02:47 by secaball          #+#    #+#             */
/*   Updated: 2022/02/22 14:43:54 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char			src[] = "42";
	char			dest[] = "hola";
	unsigned int	size;

	size = 6;
	printf("%d\n", ft_strlcat(dest, src, size));
}*/
