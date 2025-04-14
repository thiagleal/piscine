/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:47:14 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/31 23:31:15 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	tam;
	unsigned int	i;

	tam = 0;
	i = 0;
	while (src[tam] != '\0')
	{
		tam++;
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (tam);
}
/*
int main()
{
	char src[] = "Teste 123456";
	char dest[9] = "";
	
	ft_strlcpy(dest, src, 9);
	printf("Txt original: %s\n", src);
	printf("Txt dest: %s\n", dest); 
}
*/