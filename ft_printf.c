/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 03:36:47 by nloutfi           #+#    #+#             */
/*   Updated: 2021/12/14 06:03:00 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	arg_count(const char *s)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (s[i] == '%')
	{
		i++;
		n++;
	}
	while (s[i])
	{
		if (s[i] == '%' && s[i - 1] != '%')
			n++;
		i++;
	}
	return (n);
}

void	arg_conversion(char c, va_list tab, int *l)
{
	if (c == 'c')
		ft_putchar(va_arg(tab, int), l);
	else if (c == 's')
	{
		ft_putstr(va_arg(tab, char *), l);
	}	
	else if (c == 'p')
	{
		ft_putstr("0x", l);
		ft_putbase(va_arg(tab, unsigned long), "0123456789abcdef", 16, l);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(tab, int), l);
	else if (c == 'u')
		ft_putbase(va_arg(tab, unsigned int), "0123456789", 10, l);
	else if (c == 'x')
		ft_putbase(va_arg(tab, unsigned int), "0123456789bacdef", 16, l);
	else if (c == 'X')
		ft_putbase(va_arg(tab, unsigned int), "0123456789ABCDEF", 16, l);
	else
		ft_putchar(c, l);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		l;
	va_list	tab;
	int		n;

	i = 0;
	l = 0;
	n = arg_count(s);
	if (!n)
	{
		ft_putstr(s, &l);
		return (l);
	}
	va_start(tab, s);
	while (s[i])
	{
		if (s[i] == '%')
			arg_conversion(s[++i], tab, &l);
		else
			ft_putchar(s[i], &l);
		i++;
	}
	va_end(tab);
	return (l);
}