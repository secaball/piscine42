/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:50:46 by secaball          #+#    #+#             */
/*   Updated: 2022/02/20 13:58:21 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	str[] = "Hola Pony"; 
	int	i;
	
	i = 0;
	if (str[1] == '\0')
	{
		write (1, "\n", 1);
	}
	else
	{
		while (str[i] == ' ' || str[i] == '\t')
				i++;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			write (1, &str[i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
}
