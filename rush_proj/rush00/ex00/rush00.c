/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:08:08 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/18 19:50:11 by tsiqueir         ###   ########.fr       */
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
			if ((cy == 0 && cx == 0) || (cy == 0 && cx == x - 1)
				|| (cy == y - 1 && cx == 0) || (cy == y - 1 && cx == x - 1))
				ft_putchar('o');
			else if (cy == 0 || cy == y - 1)
				ft_putchar('-');
			else if (cx == 0 || cx == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
