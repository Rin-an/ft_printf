/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:30:59 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:31:00 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(t_format *tab)
{
	unsigned long	a;

	a = va_arg(tab->arg, unsigned long);
	tab->r += write(1, "0x", 2);
	ft_tohexp(tab, a, "0123456789abcdef");
}
