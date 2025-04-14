/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:39:14 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/22 22:27:22 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}
/*
int	main ()
{
	int	va;
	int	vb;
	
	va = 4;
	vb = 2;
	printf("a: %d, b: %d\n", va, vb);
	ft_swap(&va, &vb);
	printf("a: %d, b: %d\n", va, vb);
	return(0);
}
*/