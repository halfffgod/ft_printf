/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:48:58 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/20 18:38:59 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puthex(unsigned int num, const char name);
void    ft_puthexptr(unsigned long long num, const char name);
int		printchar(char c);
int		printstr(char *str);
int		printnbr(int n);
int		printpercent(void);
int		print_len(va_list args, const char spcfr);
int		ft_printf(const char *str, ...);
int		hex_len(unsigned long long num);
int		printhex(unsigned int num, const char name);
int		printnbr_unsigned(unsigned int n);
char    *itoa_unsigned(unsigned int n);
int		printptr(unsigned long long num, const char name);

#endif

