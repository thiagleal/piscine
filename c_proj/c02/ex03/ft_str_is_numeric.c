/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:45:16 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/27 15:47:50 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	a[] = "123456";
	char	b[] = "";
	char	c[] = "AA000ddd";

	printf("Texto 1: %s\nTexto 2: %s\nTexto 3: %s\n", a, b, c);
	ft_str_is_numeric(a);
	ft_str_is_numeric(b);
	ft_str_is_numeric(c);
	printf("Retorno 1: %d\nRetorno 2: %d\nRetorno 3: %d\n", 
		ft_str_is_numeric(a), ft_str_is_numeric(b), ft_str_is_numeric(c));
	return (0);
}
*/