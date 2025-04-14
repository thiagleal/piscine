/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:06:21 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/18 19:53:07 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int put);

void	rush(int x, int y)
{
	int	cx;
	int	cy;

	cy = 0;
	while (cy < y && (x > 0) && (y > 0))
	{
		cx = 0;
		while (cx < x)
		{
			if ((cy == 0 && cx == 0) || (cx == 0 && cy == y - 1))
				ft_putchar('A');
			else if ((cy == y -1 && cx == x -1) || (cy == 0 && cx == x - 1))
				ft_putchar('C');
			else if (cy == 0 || cy == y - 1 || cx == 0 || cx == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
