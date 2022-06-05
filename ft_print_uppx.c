/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uppx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:29:30 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:29:31 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uppx(t_format *tab)
{
	unsigned int	a;

	a = va_arg(tab->arg, unsigned int);
	if (tab->hash && a > 0)
		ft_treat_hash(tab, "0X");
	ft_tohex(tab, a, "0123456789ABCDEF");
}
