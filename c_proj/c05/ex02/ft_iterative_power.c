/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:26:33 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/02 12:28:16 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
int	main()
{
	int	valor;
	int	power;
	int	nb;

	nb = 2;
	power = 4;
	valor = ft_iterative_power(nb, power);
	printf("Resultado de %d elevado a %d sera: %d\n", nb, power, valor);
	return (0);	
}
*/