/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:41:49 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/20 18:38:31 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_len(va_list args, const char spcfr)
{
	int	len_print;

	len_print = 0;
	if (spcfr == 'c')
		len_print += printchar(va_arg(args, int));
	else if (spcfr == 's')
		len_print += printstr(va_arg(args, char *));
	else if (spcfr == 'd' || spcfr == 'i')
		len_print += printnbr(va_arg(args, int));
	else if (spcfr == '%')
		len_print += printpercent();
	else if (spcfr == 'x' || spcfr == 'X')
		len_print += printhex(va_arg(args, unsigned int), spcfr);
	else if (spcfr == 'p')
		len_print += printptr(va_arg(args,unsigned long long), spcfr);
	else if (spcfr == 'u')
		len_print += printnbr_unsigned(va_arg(args, unsigned int));
	return (len_print);
}
