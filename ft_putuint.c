/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:29:23 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/18 20:29:27 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putuint(unsigned int n, int fd)
{
	unsigned int		r;
	unsigned long		nb;

	nb = n;
	r = 0;
	if (nb >= 10)
	{
		r += ft_putnbr_fd(nb / 10, fd);
		r += ft_putnbr_fd(nb % 10, fd);
	}
	else
		r += ft_putchar_fd(nb + 48, fd);
	return (r);
}
