/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:12:03 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/21 11:09:57 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned long long num)
{
	unsigned int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num /= 16;
	}
	return (i);
}

void	ft_puthex(unsigned int num, const char name)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, name);
		ft_puthex(num % 16, name);
	}
	else
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
		{
			if (name == 'x')
				ft_putchar ((num - 10) + 'a');
			if (name == 'X')
				ft_putchar ((num - 10) + 'A');
		}
	}
}

int	printhex(unsigned int num, const char name)
{
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else
		ft_puthex(num, name);
	return (hex_len((unsigned long long)num));
}

void	ft_puthexptr(unsigned long long num, const char name)
{
	if (num >= 16)
	{
		ft_puthexptr(num / 16, name);
		ft_puthexptr(num % 16, name);
	}
	else
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
			ft_putchar ((num - 10) + 'a');
	}
}

int	printptr(unsigned long long num, const char name)
{
	if (num == 0)
	{
		write (1, "0x", 2);
		write (1, "0", 1);
		return (3);
	}
	else
	{
		write (1, "0x", 2);
		ft_puthexptr(num, name);
	}	
	return (hex_len(num) + 2);
}
