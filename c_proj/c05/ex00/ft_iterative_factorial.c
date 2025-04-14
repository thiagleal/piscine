/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:17:55 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/02 12:27:31 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultado;
	int	i;

	i = nb;
	resultado = 1;
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		resultado *= i;
		i--;
	}
	return (resultado);
}
/*
int	main()
{
	int	i;
	int	n;

	n = -8;
	i = ft_iterative_factorial(n);
	printf("Valor fatorial de %d sera: %d\n", n, i);
	return (0);
}
*/