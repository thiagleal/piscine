/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:26:17 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/20 22:12:59 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		pri;
	int		seg;
	char	div[2];

	pri = 0;
	while (pri <= 98)
	{
		seg = pri + 1;
		while (seg <= 99)
		{
			div[0] = (pri / 10) + '0';
			div[1] = (pri % 10) + '0';
			write(1, div, 2);
			write(1, " ", 1);
			div[0] = (seg / 10) + '0';
			div[1] = (seg % 10) + '0';
			write(1, div, 2);
			if (pri != 98 || seg != 99)
				write(1, ", ", 2);
			seg++;
		}
		pri++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/