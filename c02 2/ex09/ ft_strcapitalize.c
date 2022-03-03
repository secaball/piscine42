/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:18:40 by secaball          #+#    #+#             */
/*   Updated: 2022/02/22 12:50:58 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < '0' || str[i] > '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "+salut, coMment ¡¡tu Vas ? 42mots quarante;;cincuante+et-uN";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
