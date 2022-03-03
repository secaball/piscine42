/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:53:14 by secaball          #+#    #+#             */
/*   Updated: 2022/03/01 18:39:56 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr = (char*)malloc(300 * sizeof(char));
	if (ptr != NULL)
	{
		printf("%s", ptr);
		while (src[i] != '\0')
		{	
			ptr[i] = src[i];
			i++;
		}
		return (ptr);
	}
	else
		return (0);
	free(ptr);
}

int	main(void)
{
	printf("%s\n", ft_strdup("Hola 42"));
}
