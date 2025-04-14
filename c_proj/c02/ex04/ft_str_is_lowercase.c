/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:03:53 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/24 11:41:34 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
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
	char	c[] = "ABCDS32";

	printf("Texto 1: %s\nTexto 2: %s\nTexto 3: %s\n", a, b, c);
	ft_str_is_lowercase(a);
	ft_str_is_lowercase(b);
	ft_str_is_lowercase(c);
	printf("Retorno 1: %d\nRetorno 2: %d\nRetorno 3: %d\n", 
		ft_str_is_lowercase(a), ft_str_is_lowercase(b), ft_str_is_lowercase(c));
	return (0);
}
*/