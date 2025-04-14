/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:17:25 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/03 19:42:56 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= 46340 && i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
	int	main()
	{
		int	resultado;
		int	a;

		a = 2147395600;
		resultado = ft_sqrt(a);
		printf("Resultado da Raiz Quadrada sera: %d\n", resultado);
		return (0);
	}
*/