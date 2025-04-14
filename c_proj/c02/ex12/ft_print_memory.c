/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiqueir <tsiqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:40:20 by tsiqueir          #+#    #+#             */
/*   Updated: 2024/09/02 19:37:52 by tsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char c)
{
	char hex[2];
	char *hex_chars = "0123456789abcdef";
	hex[0] = hex_chars[c / 16];
	hex[1] = hex_chars[c % 16];
	write(1, hex, 2);
}

void	memory(void *addr, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr;
	
	ptr = addr;
	for (i = 0; i < 16; i++) {
		if (i < size) {
			ft_hex(ptr[i]);
		} else {
			write(1, "  ", 2);
		}
		if (i % 2) ft_putchar(' ');
	}
	
	for (i = 0; i < size; i++) {
		if (ptr[i] >= 32 && ptr[i] <= 126)
			ft_putchar(ptr[i]);
		else
			ft_putchar('.');
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i = 0;
	unsigned char *ptr = addr;
	
	while (i < size) {
		ft_hex((unsigned long)(ptr + i) >> 56);
		ft_hex((unsigned long)(ptr + i) >> 48);
		ft_hex((unsigned long)(ptr + i) >> 40);
		ft_hex((unsigned long)(ptr + i) >> 32);
		ft_hex((unsigned long)(ptr + i) >> 24);
		ft_hex((unsigned long)(ptr + i) >> 16);
		ft_hex((unsigned long)(ptr + i) >> 8);
		ft_hex((unsigned long)(ptr + i));
		ft_putchar(':');
		ft_putchar(' ');
		memory(ptr + i, (size - i < 16) ? size - i : 16);
		i += 16;
	}
	return addr;
}

int	main(void) 
{
	char buffer[91];

	strcpy(buffer, "Bonjour les amis.\n");
	ft_print_memory(buffer, sizeof(buffer));
	strcpy(buffer, "ches...c. est fo\n");
	ft_print_memory(buffer, sizeof(buffer));
	strcpy(buffer, "u.tout.ce qu on\n");
	ft_print_memory(buffer, sizeof(buffer));
	strcpy(buffer, "peut faire avec");
	ft_print_memory(buffer, sizeof(buffer));
	strcpy(buffer, "..print_memory.\n");
	ft_print_memory(buffer, sizeof(buffer));
	strcpy(buffer, "..lol.lol. .\n");
	ft_print_memory(buffer, sizeof(buffer));
	return (0);
}
*/