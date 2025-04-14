/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:37 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/02 19:51:50 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char num[], int n)
{
	int	i;
	int	print;

	i = 0;
	while (i < n)
	{
		print = num[i] + '0';
		write(1, &print, 1);
		i++;
	}
	if (num[0] < 10 - n)
		write(1, ", ", 2);
}

void	init_num(char num[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
}

int	update_num(char num[], int n)
{
	int	i;

	i = n - 1;
	while (i >= 0 && num[i] == 9 - (n - 1 - i))
		i--;
	if (i < 0)
		return (0);
	num[i]++;
	i++;
	while (i < n)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	char	num[10];

	if (n <= 0 || n >= 10)
		return ;
	init_num(num, n);
	while (1)
	{
		print_num(num, n);
		if (!update_num(num, n))
			return ;
	}
}
/*
int	main(void)
{
	ft_print_combn(3);
	return (0);
}
*/