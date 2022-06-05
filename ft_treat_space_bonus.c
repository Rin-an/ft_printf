/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:30:14 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:30:15 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_treat_space(int a, t_format *tab)
{
	char	c;

	c = ' ';
	if (a >= 0)
		tab->r += write(1, &c, 1);
}
