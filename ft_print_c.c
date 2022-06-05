/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:29:51 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:29:52 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_format	*tab)
{
	int	a;

	a = va_arg(tab->arg, int);
	tab->r += ft_putchar_fd(a, 1);
}