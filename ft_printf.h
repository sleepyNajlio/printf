/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:19:30 by nloutfi           #+#    #+#             */
/*   Updated: 2021/12/14 05:33:45 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

void	ft_putchar(char c, int *l);
void	ft_putstr(const char *s, int *l);
void	ft_putbase(unsigned long n, char *base, int size, int *l);
void	ft_putnbr(int n, int *l);
int		ft_printf(const char *s, ...);

#endif