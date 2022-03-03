/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:36:23 by secaball          #+#    #+#             */
/*   Updated: 2022/02/21 17:24:38 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && (cont < n))
	{
		i++;
		cont++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("holo", "homa", 4));
}*/
