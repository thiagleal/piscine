/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:36:31 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/28 21:18:01 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	a[] = "Azul";
	char	b[] = "azul";
	int		retornofuncao;
	int		retornoft;

	retornofuncao = strcmp(a, b);
	retornoft = ft_strcmp(a, b);
	printf("Valor de a: %s\nValor de b: %s\n",a, b);
	printf("Retorno strcmp: %d\n", retornofuncao);
	printf("Retorno ft_strcmp: %d\n", retornoft);
	return (0);
}
*/