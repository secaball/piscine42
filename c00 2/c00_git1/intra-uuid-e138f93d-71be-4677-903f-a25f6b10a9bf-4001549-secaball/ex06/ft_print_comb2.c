/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:00:56 by secaball          #+#    #+#             */
/*   Updated: 2022/02/14 18:17:45 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_print_comb2(void);
void	putchar(char c);

int	main(void)
{
	ft_print_comb2();
}
*/
void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	fpar;
	int	spar;

	fpar = 0;
	while (fpar <= 98)
	{
		spar = fpar + 1;
		while (spar <= 99)
		{
			putchar((fpar / 10) + '0');
			putchar((fpar % 10) + '0');
			write (1, " ", 1);
			putchar((spar / 10) + '0');
			putchar((spar % 10) + '0');
			if ((spar == 99) && (fpar == 98))
			{
			}
			else
				write (1, ", ", 2);
			++spar;
		}
		++fpar;
	}
}
