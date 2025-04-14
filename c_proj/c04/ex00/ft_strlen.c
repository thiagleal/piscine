/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:30:41 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/28 19:21:44 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	char	a[] = "Quarenta e dois";
	int		resultado;

	resultado = ft_strlen(a);
	printf("Texto a: %s\nQuantidade da contagem: %d\n", a, resultado);
	return (0);
}
*/