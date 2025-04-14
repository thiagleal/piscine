/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:22:27 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/08/20 15:23:38 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	show;

	show = 'z';
	while (show >= 'a')
	{
		write(1, &show, 1);
		show--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
}
*/