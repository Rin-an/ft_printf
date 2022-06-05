/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 22:49:53 by ssadiki           #+#    #+#             */
/*   Updated: 2022/01/05 18:04:26 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int		r;
	long	nb;

	nb = n;
	r = 0;
	if (nb < 0)
	{
		nb *= -1;
		r += ft_putchar_fd('-', fd);
	}
	if (nb >= 10)
	{
		r += ft_putnbr_fd(nb / 10, fd);
		r += ft_putnbr_fd(nb % 10, fd);
	}
	else
		r += ft_putchar_fd(nb + 48, fd);
	return (r);
}
