/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:37:13 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/05 19:24:50 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	tam;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tam = max - min;
	*range = (int *)malloc(tam * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < tam)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (tam);
}
/*
int main()
{
	int	min = -5;
	int	max = 5;
	int	*result;
	int	size;
	int	i;
	
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);
	size = ft_ultimate_range(&result, min, max);
	printf("Valor de Size: %d\n", size);
	printf("Valor de Result: ");
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
*/