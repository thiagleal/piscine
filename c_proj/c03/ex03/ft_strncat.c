/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:22:41 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/28 17:46:37 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	a[] = "Ola, ";
	char	b[] = "tudo bem?";
	int		n;

	n = 4;
	printf("Texto original a: %s\nTexto original b: %s\n", a, b);
	ft_strncat(a, b, n);
	printf("Texto modificado a: %s\n", a);
	return (0);
}
*/