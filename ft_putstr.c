/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:16:08 by nloutfi           #+#    #+#             */
/*   Updated: 2021/12/14 05:54:50 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *l)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (s[i])
		ft_putchar(s[i++], l);
}
