/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:30:49 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:30:50 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type(const char str, t_format *tab)
{
	if (str == 'd' || str == 'i')
		ft_print_int(tab);
	else if (str == 'c')
		ft_print_c(tab);
	else if (str == 's')
		ft_print_s(tab);
	else if (str == 'p')
		ft_print_p(tab);
	else if (str == 'x')
		ft_print_x(tab);
	else if (str == 'X')
		ft_print_uppx(tab);
	else if (str == 'u')
		ft_print_u(tab);
	else if (str == '%')
		tab->r += write(1, "%", 1);
}
