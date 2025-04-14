/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:53:45 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/22 12:31:09 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	resuldiv;
	int	restdiv;

	resuldiv = *a;
	restdiv = *b;
	*a = resuldiv / restdiv;
	*b = resuldiv % restdiv;
}
/*
int	main()
{
	int	a;
	int b;

	a = 5;
	b = 2;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d\n", a, b);
}
*/