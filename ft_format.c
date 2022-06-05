/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:28:21 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:28:23 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *str, int i, t_format *tab)
{
	while (!(ft_strchr("cspdiuxX%", (int)str[i])))
	{
		if (str[i] == '+')
			tab->plus = 1;
		else if (str[i] == ' ')
			tab->space = 1;
		else if (str[i] == '#')
			tab->hash = 1;
		i++;
	}
	ft_type(str[i], tab);
	return (i);
}
