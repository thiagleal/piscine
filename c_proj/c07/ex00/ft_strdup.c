/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:23:28 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/04 21:13:22 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		tam;
	int		j;
	char	*clone;

	tam = 0;
	while (src[tam] != '\0')
		tam++;
	clone = (char *)malloc((tam + 1) * sizeof(char));
	if (clone == NULL)
		return (NULL);
	j = 0;
	while (j <= tam)
	{
		clone[j] = src[j];
		j++;
	}
	clone[j] = '\0';
	return (clone);
}
/*
int main()
{
	char original[] = "Ola tudo bem?";
	char* clone;
	
	//clone = strdup(original);
	clone = ft_strdup(original);

	printf("Original: %s\n", original);
	printf("Cópia: %s\n", clone);
	free(clone);
	return (0);
}
*/