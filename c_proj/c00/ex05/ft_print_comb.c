/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:14:36 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/20 16:33:42 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	pri;
	char	seg;
	char	ter;

	pri = '0';
	while (pri <= '7')
	{
		seg = pri + 1;
		while (seg <= '8')
		{
			ter = seg + 1;
			while (ter <= '9')
			{
				write(1, &pri, 1);
				write(1, &seg, 1);
				write(1, &ter, 1);
				if (pri != '7' || seg != '8' || ter != '9')
					write(1, ", ", 2);
				ter++;
			}
			seg++;
		}
		pri++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/