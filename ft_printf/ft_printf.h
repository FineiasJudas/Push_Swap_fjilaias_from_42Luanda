/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 07:20:17 by fjilaias          #+#    #+#             */
/*   Updated: 2024/06/05 07:24:38 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include "ft_printf.h"

int			ft_printf(const char *l, ...);
void		ft_putstr(const char *s, int *i);
void		ft_putchar(char c, int *i);
void		ft_putnbr(int n, int *i);
void		ft_put(unsigned int nb, int *i);
void		ft_hex(unsigned long long nbr, int i, int *l);
void		ft_ptr(void *p, int *i);

#endif
