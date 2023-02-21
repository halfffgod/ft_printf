/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:13:06 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/21 10:57:26 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	printchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	printnbr(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	i = printstr(str);
	free(str);
	return (i);
}

int	printnbr_unsigned(unsigned int n)
{
	char			*str;
	unsigned	int	i;

	i = 0;
	str = itoa_unsigned(n);
	i = printstr(str);
	free(str);

	return (i);
}

int	printpercent(void)
{
	write (1, "%", 1);
	return (1);
}

/*int main()
{
	char *arr = "abdullah";
	int n = 123456;
	
	printstr(arr);
	printnbr(n);
	printpercent();

}*/
