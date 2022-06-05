/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:30:24 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:30:24 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(t_format *tab)
{
	int	a;

	a = va_arg(tab->arg, int);
	if (tab->plus)
		ft_treat_plus(tab, a);
	else if (tab->space)
		ft_treat_space(a, tab);
	tab->r += ft_putnbr_fd(a, 1);
}
