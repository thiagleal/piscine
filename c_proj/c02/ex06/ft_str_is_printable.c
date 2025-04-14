/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:47:30 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/24 12:43:28 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	a[] = "abcde";
	char	b[] = "kjhasas\n";
	char	c[] = "wq44)(/)";
	int		res_a;
	int		res_b;
	int		res_c;

	printf("Texto 1: %s\nTexto 2: %s\nTexto 3: %s\n", a, b, c);
	res_a = ft_str_is_printable(a);
	res_b = ft_str_is_printable(b);
	res_c = ft_str_is_printable(c);
	printf("Result a: %d\n", res_a);
	printf("Result b: %d\n", res_b);
	printf("Result c: %d\n", res_c);
	return (0);
}
*/