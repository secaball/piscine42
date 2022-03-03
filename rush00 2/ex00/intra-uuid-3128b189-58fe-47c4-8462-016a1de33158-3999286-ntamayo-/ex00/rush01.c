/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:31:44 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/14 08:03:19 by secaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char character_var);

void	rush(int x, int y)
{
	int	h;
	int	v;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (((h == x && v == y) && y > 1) && x > 1))
				ft_putchar('/');
			else if ((h == 1 && v == y) || (h == x && v == 1))
				ft_putchar('\\');
			else if (h == 1 || v == 1 || h == x || v == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
