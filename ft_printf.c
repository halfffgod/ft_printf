/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:08:52 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/21 11:10:37 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len_print;

	i = 0;
	len_print = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len_print += print_len(args, str[i + 1]);
			i++;
		}
		else
			len_print += printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len_print);
}

/*int main()
{
	//ft_printf("%p\n", -1);
	ft_printf("barev%");
}*/
