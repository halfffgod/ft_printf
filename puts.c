/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:02:38 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/18 19:49:25 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/*void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = nb * (-1);
	}
	else
		num = nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + 48);
	}
	else
		ft_putchar(num + 48);
}

void ft_putunsigned (unsigned int num)
{
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + 48);
	}
	else
		ft_putchar(num + 48);
}*/
