/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:05:30 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/12 18:41:59 by ntamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char caracter);

void	fila_sup(int a, int x)
{
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar('A');
		}
		else if (a < x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('C');
		}
		if (a == x)
		{
			write(1, "\n", 1);
		}
		a++;
	}
}

void	filas_medias(int a, int b, int x, int y)
{
	while (b < y)
	{
		a = 1;
		while (a <= x)
		{
			if (a == 1 || a == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			if (a == x)
			{
				write(1, "\n", 1);
			}
			a++;
		}
		b++;
	}
}

void	fila_inf(int a, int x)
{
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar('C');
		}
		else if (a < x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar('A');
		}
		if (a == x)
		{
			write(1, "\n", 1);
		}
		a++;
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	fila_sup(a, x);
	filas_medias(a, b, x, y);
	if (y > 1)
	{
		fila_inf(a, x);
	}
}
