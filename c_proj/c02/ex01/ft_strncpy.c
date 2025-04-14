/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:48:30 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/27 15:43:16 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	unsigned int	car;
	char	a[] = "Texto de substituicao";
	char	b[30] = "Texto apagado";

	car = 13;
	ft_strncpy(b, a, car);
	printf("Texto original: %s\nTexto modificado: %s\n", a, b);
	return (0);	
}
*/