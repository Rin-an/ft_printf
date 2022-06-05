/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:29:59 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:30:00 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(t_format *tab)
{
	unsigned int	a;

	a = va_arg(tab->arg, unsigned int);
	if (tab->hash && a > 0)
		ft_treat_hash(tab, "0x");
	ft_tohex(tab, a, "0123456789abcdef");
}
