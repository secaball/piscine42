/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secaball <secaball@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 08:31:30 by secaball          #+#    #+#             */
/*   Updated: 2022/02/14 16:30:55 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_print_comb(void);
void	putchar(char np, char ns, char nt);

int	main(void)
{
	ft_print_comb();
}
*/
void	putchar(char np, char ns, char nt)
{
	write (1, &np, 1);
	write (1, &ns, 1);
	write (1, &nt, 1);
	if ((np == '7') && (ns == '8') && (nt == '9'))
	{
	}
	else
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	np;
	char	ns;
	char	nt;

	np = '0';
	while (np <= '7')
	{
		ns = np + 1;
		while (ns <= '8')
		{
			nt = ns + 1;
			while (nt <= '9')
			{
				putchar(np, ns, nt);
				++nt;
			}
			++ns;
		}
		++np;
	}	
}
