/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:56:30 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/02 12:27:49 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	resultado = nb * ft_recursive_factorial(nb - 1);
	return (resultado);
}
/*
int	main()
{
	int	valor;
	int	n;

	n = 2;
	valor = ft_recursive_factorial(n);
	printf("Valor fatorial de %d sera: %d\n", n, valor);
	return (0);
}
*/