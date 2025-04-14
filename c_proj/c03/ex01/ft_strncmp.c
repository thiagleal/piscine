/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:17:19 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/27 22:20:05 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n && s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main()
{
	char	a[] = "Azul";
	char	b[] = "AzUl";
	int		retornofuncao;
	int		retornoft;

	int		n = 3;
	retornofuncao = strncmp(a, b, n);
	retornoft = ft_strncmp(a, b, n);
	printf("Valor de a: %s\nValor de b: %s\n", a, b);
	printf("Retorno strncmp: %d\n", retornofuncao);
	printf("Retorno ft_strncmp: %d\n", retornoft);
	return (0);
}
*/