/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:07:45 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/24 11:43:54 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	a[] = "abcde";
	char	b[] = "";
	char	c[] = "ABCDEF";

	printf("Texto 1: %s\nTexto 2: %s\nTexto 3: %s\n", a, b, c);
	ft_str_is_uppercase(a);
	ft_str_is_uppercase(b);
	ft_str_is_uppercase(c);
	printf("Retorno 1: %d\nRetorno 2: %d\nRetorno 3: %d\n", 
		ft_str_is_uppercase(a), ft_str_is_uppercase(b), ft_str_is_uppercase(c));
	return (0);
}
*/