/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:20:13 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/05 14:59:42 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

int	ft_tamtotal(int size, char **strs, char *sep)
{
	int	i;
	int	tamsep;
	int	tamtotal;

	i = 0;
	tamtotal = 0;
	tamsep = ft_strlen(sep);
	while (i < size)
	{
		tamtotal = tamtotal + ft_strlen(strs[i]);
		i++;
	}
	tamtotal = tamtotal + tamsep * (size - 1);
	return (tamtotal);
}

char	*ft_concatenate(int size, char **strs, char *sep, char *result)
{
	char	*ptr;
	int		tamsep;
	int		i;

	i = 0;
	ptr = result;
	tamsep = ft_strlen(sep);
	while (i < size)
	{
		if (i > 0)
		{
			ft_strcpy(ptr, sep);
			ptr = ptr + tamsep;
		}
		ft_strcpy(ptr, strs[i]);
		ptr = ptr + ft_strlen(strs[i]);
		i++;
	}
	*ptr = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*vazio;
	char	*result;
	int		tamtotal;

	if (size == 0)
	{
		vazio = (char *)malloc(1);
		if (vazio == NULL)
			return (NULL);
		vazio[0] = '\0';
		return (vazio);
	}
	tamtotal = ft_tamtotal(size, strs, sep);
	result = (char *)malloc(tamtotal + 1);
	if (result == NULL)
		return (NULL);
	return (ft_concatenate(size, strs, sep, result));
}
/*
int main()
{
	char *strs[] = {"Hello", "World", "42"};
	char *sep = " - ";
	char *result = ft_strjoin(3, strs, sep);
	printf("%s\n", result);
	free(result);
	return 0;
}
*/