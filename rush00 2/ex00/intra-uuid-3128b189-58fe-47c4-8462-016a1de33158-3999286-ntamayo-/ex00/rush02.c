/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntamayo- <ntamayo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:31:44 by ntamayo-          #+#    #+#             */
/*   Updated: 2022/02/13 19:41:19 by ntamayo-         ###   ########.fr       */
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
			if ((h == 1 && v == 1) || (h == x && v == 1))
				ft_putchar('A');
			else if ((h == x && v == y) || (h == 1 && v == y))
				ft_putchar('C');
			else if (h == 1 || v == 1 || h == x || v == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
