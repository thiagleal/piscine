/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:08:52 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/02 19:37:10 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < --size)
	{
		ft_swap(&tab[i], &tab[size]);
	}
}
/*
int	main()
{
	int arr[] = {1, 3, 5, 7, 8, 9};
	int size = sizeof(arr) / sizeof(arr[0]);

	int i = -1;
	printf("Antes: ");
	while (++i < size)
		printf("%d", arr[i]);
	printf("\n");

	ft_rev_int_tab(arr, size);

	i = -1;
	printf("Depois: ");
	while (++i < size)
		printf("%d", arr[i]);
	printf("\n");
	return (0);
}
*/