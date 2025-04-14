/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:07:15 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/10/28 13:59:56 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "AAAABBcccddd";
	char	b[] = "";
	char	c[] = "AA000';/ddd";

	//printf("%d\n", ft_str_is_alpha(a));
	//printf("%d\n", ft_str_is_alpha(b));
	//printf("%d\n", ft_str_is_alpha(c));
	printf("Texto 1: %s\nTexto 2: %s\nTexto 3: %s\n", a, b, c);
	ft_str_is_alpha(a);
	ft_str_is_alpha(b);
	ft_str_is_alpha(c);
	printf("Retorno 1: %d\nRetorno 2: %d\nRetorno 3: %d\n", 
		ft_str_is_alpha(a), ft_str_is_alpha(b), ft_str_is_alpha(c));
	return (0);
}
*/