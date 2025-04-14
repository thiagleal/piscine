/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:45:51 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/01 20:09:12 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	valor;

	valor = nb;
	if (valor < 0)
	{
		write (1, "-", 1);
		valor = -valor;
	}
	if (valor >= 10)
		ft_putnbr(valor / 10);
	c = (valor % 10) + '0';
	write(1, &c, 1);
}
/*
int	main()
{
	ft_putnbr(42);
}
*/