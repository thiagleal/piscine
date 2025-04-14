/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:25:21 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/20 15:23:43 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	show;

	show = 'a';
	while (show <= 'z')
	{
		write(1, &show, 1);
		show++;
	}
}
/*
int main()
{
	ft_print_alphabet();
}
*/