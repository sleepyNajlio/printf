/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 03:20:49 by nloutfi           #+#    #+#             */
/*   Updated: 2021/12/14 04:02:42 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(unsigned long n, char *base, int size, int *l)
{
	if (n >= (unsigned long)size)
		ft_putbase((n / size), base, size, l);
	ft_putchar(base[n % size], l);
}
