/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:17:50 by secaball          #+#    #+#             */
/*   Updated: 2022/02/18 10:14:15 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	size_str(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_rev_print(char *str)
{
	int size;

	size = size_str(str);
	while (size >= 0)
	{
		write (1, &str[size], 1);
		size--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "dub0 a POIL";
	
	ft_rev_print(str);
}
