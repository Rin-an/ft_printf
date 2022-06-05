/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:31:08 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:31:09 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_tohex(t_format *tab, unsigned int nbr, char *base)
{
	unsigned int	nbr_r[200];
	unsigned int	i;

	i = 0;
	if (nbr == 0)
	{
		tab->r += write(1, "0", 1);
	}
	while (nbr != 0)
	{
		nbr_r[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (i > 0)
		tab->r += write(1, &base[nbr_r[--i]], 1);
}
