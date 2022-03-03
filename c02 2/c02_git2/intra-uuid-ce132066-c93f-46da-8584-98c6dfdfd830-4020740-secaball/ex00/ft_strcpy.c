/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:14:54 by secaball          #+#    #+#             */
/*   Updated: 2022/02/18 10:08:18 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "";
	char	src[] = "hola";

	ft_strcpy(dest, src);
	for(int i = 0; i <= 3; i++)
		write (1, &dest[i], 1);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
