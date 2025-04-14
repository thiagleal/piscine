/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:18:36 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/29 10:37:55 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ini;

	i = 0;
	ini = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && ini == 1)
		{
			str[i] = str[i] - 32;
			ini = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && ini == 0)
			str[i] = str[i] + 32;
		else if (!(str[i] >= '0' && str[i] <= '9') && !(
				str[i] >= 'a' && str[i] <= 'z') && !(
				str[i] >= 'A' && str[i] <= 'Z'))
			ini = 1;
		else
			ini = 0;
		i++;
	}
	return (str);
}
/*
int main()
{
	char a[] = "ola, tuDo bem? 42palavras quArenta-e-duas; cinquenta+e+um";

	printf("Texto original: %s\n", a);
	ft_strcapitalize(a);
	printf("Texto capitalizado: %s\n", a);
	return 0;
}
*/