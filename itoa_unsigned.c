/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_unsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:52:45 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/20 17:29:41 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	digits(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char    *itoa_unsigned(unsigned int n)
{
	char			*str;
	unsigned int	i;

	i = digits(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[i] = '\0';
	
	while (i-- && n != 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
