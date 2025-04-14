/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:28:53 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/04 21:13:41 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	tam;
	int	*ret;
	int	i;

	if (min >= max)
		return (NULL);
	tam = max - min;
	ret = (int *)malloc(tam * sizeof(int));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
/*
int main()
{
	int	min = -4;
	int	max = 25;
	int	*result;
	int	i;
	
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);
	result = ft_range(min, max);
	printf("Valor de Result: ");
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/