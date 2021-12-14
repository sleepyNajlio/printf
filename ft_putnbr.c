/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:31:20 by nloutfi           #+#    #+#             */
/*   Updated: 2021/12/14 05:13:22 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *l)
{
	char		c;
	long int	t;

	t = (long int)n;
	if (t < 0)
	{
		ft_putchar('-', l);
		t = -t;
	}
	if (t < 10)
	{
		c = t + '0';
		ft_putchar(c, l);
	}
	else
	{
		ft_putnbr(t / 10, l);
		ft_putnbr(t % 10, l);
	}
}
