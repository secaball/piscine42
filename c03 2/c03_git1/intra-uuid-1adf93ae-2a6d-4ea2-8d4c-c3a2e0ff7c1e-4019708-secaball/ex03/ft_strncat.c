/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:02:38 by secaball          #+#    #+#             */
/*   Updated: 2022/02/22 13:16:17 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	cont;

	i = 0;
	j = 0;
	cont = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (cont < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
		cont++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hola";
	char	dest[] = "42";
	int	i;

	i = 1;
	printf("%s", ft_strncat(dest, src, i));
}*/
