/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:26:16 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/12 21:30:34 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			i;
	t_format	*tab;
	int			len;

	tab = (t_format *)malloc(sizeof(t_format));
	if (!tab)
		return (-1);
	ft_init(tab);
	va_start(tab->arg, str);
	i = -1;
	len = 0;
	while (str[++i])
	{	
		if (str[i] == '%')
		{
			i = ft_format(str, i + 1, tab);
		}
		else
			len += write(1, &str[i], 1);
	}
	va_end(tab->arg);
	len += tab->r;
	free(tab);
	return (len);
}
