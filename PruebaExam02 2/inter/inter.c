/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 08:40:45 by secaball          #+#    #+#             */
/*   Updated: 2022/02/25 13:14:44 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*str(char *aux)
{
	int	i;
	int	j;
	int	z;
	char	str_f[20];

	z = 0;
	i = 0;
	//str_f[0] = aux[0];
	while (aux[i] != '\0')
	{
		if (str_f[z] != aux[i])
		{	
			str_f[z] = aux[i];
			z++;
		}
		i++;
	}
	printf("%s\n", str_f);
	return(aux);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	z;
	char	aux[100];

	i = 0;
	z = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0' && argv[2][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					aux[z] = argv[1][i];
					//write(1, &aux[z], 1);
					z++;
				}
				j++;
			}
			i++;
		}
	str(aux);
	}
	else
		write(1, "HOLA\n", 5);
	/*i = 0;
	printf("Prueba%s\n", aux);
	while (aux[i] != '\0')
	{
		write(1, &aux[i], 1);		
		i++;
	}*/
	return (0);
}
