/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:53:18 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/28 15:17:46 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tamdest;
	unsigned int	tamsrc;

	tamdest = 0;
	tamsrc = 0;
	i = 0;
	while (dest[tamdest] != '\0' && tamdest < size)
		tamdest++;
	while (src[tamsrc] != '\0')
		tamsrc++;
	if (size <= tamdest)
		return (size + tamsrc);
	while (src[i] != '\0' && (tamdest + i) < (size - 1))
	{
		dest[tamdest + i] = src[i];
		i++;
	}
	dest[tamdest + i] = '\0';
	return (tamdest + tamsrc);
}
/*
int	main()
{
	char			a[10] = "Ola, ";
	char			b[] = "tudo bem?";
	unsigned int	resultado;
	int				tam;

	printf("Texto original a: %s\nTexto original b: %s\n", a, b);
	tam = sizeof(a);
	//Vai ler o tamaho que aceita char a, no caso aceita no maximo 30
	//resultado = strlcat(a, b, tam);
	resultado = ft_strlcat(a, b, tam);
	printf("Texto resultado a: %s\n", a);
	printf("Tamanho: %d\n", resultado);
	//Vai retornar o tamanho da string modificada, 
	//usar ld na leitura por conta de size_t.
	return (0);
}
*/