/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:14:42 by ssadiki           #+#    #+#             */
/*   Updated: 2022/02/11 13:04:22 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_format
{
	va_list	arg;
	int		plus;
	int		space;
	int		hash;
	int		r;
}	t_format;
t_format		*ft_init(t_format *tab);
int				ft_format(const char *str, int i, t_format *tab);
void			ft_print_c(t_format *tab);
void			ft_print_int(t_format *tab);
void			ft_print_p(t_format *tab);
void			ft_print_s(t_format *tab);
void			ft_print_u(t_format *tab);
void			ft_print_uppx(t_format *tab);
void			ft_print_x(t_format *tab);
int				ft_printf(const char *str, ...);
void			ft_tohex(t_format *tab, unsigned int nbr, char *base);
void			ft_tohexp(t_format *tab, unsigned long nbr, char *base);
void			ft_treat_hash(t_format *tab, char *str);
void			ft_treat_plus(t_format *tab, int x);
void			ft_treat_space(int a, t_format *tab);
void			ft_type(const char str, t_format *tab);
unsigned int	ft_putuint(unsigned int n, int fd);
int				ft_putchar_fd(char c, int fd);
int				ft_putnbr_fd(int n, int fd);
int				ft_putstr_fd(char *s, int fd);
int				ft_strchr(const char *s, int c);
#endif
