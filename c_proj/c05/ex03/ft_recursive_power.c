/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:08:10 by tsiqueir          #+#    #+#             */
/*   Updated: 2025/04/14 13:29:09 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	valor;
	int	power;
	int	nb;

	nb = -2;
	power = 4;
	valor = ft_recursive_power(nb, power);
	printf("Resultado de %d elevado a %d sera: %d\n", nb, power, valor);
	return (0);	
}
*/