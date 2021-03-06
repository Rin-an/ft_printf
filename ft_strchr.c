/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 17:31:45 by ssadiki           #+#    #+#             */
/*   Updated: 2021/12/29 21:38:07 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr(const char *s, int c)
{
	int	p;

	p = 0;
	while (*s != '\0')
	{
		if ((char)c == *s)
		{
			p = 1;
			return (p);
		}
		s++;
	}
	if ((char)c == *s)
		p = 1;
	return (p);
}
