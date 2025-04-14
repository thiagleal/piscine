/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:28:08 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/31 21:18:10 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	a[] = "Ola, tudo bem com voce?";
	char	b[] = "tudo";
	char 	*resultado;

	printf("Texto original a: %s\nTexto original b: %s\n", a, b);
	resultado = ft_strstr(a, b);
	printf("Texto resultado: %s\n", resultado);
	return (0);
}
*/