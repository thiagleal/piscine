/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:40:30 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/26 14:59:47 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
		}
	}
}
/*
int		main(void)
{
	int arr[] = {2, 7, 6, 34, 3, 1, 9};
	int size = sizeof(arr) / sizeof(arr[0]);

	int i = -1;

	printf("Antes: ");
	while (++i < size)
		printf("%d ", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("Depois: ");
	i = -1;
	while (++i < size)
		printf("%d ", arr[i]);
	printf("\n");
}
*/