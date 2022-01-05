/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 21:23:39 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/01/04 21:25:06 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_hexlow(unsigned long n);
int		ft_hexup(unsigned long n);
int		ft_putnbr(int nb, int count);
int		ft_putstr(char *str, int count);
void	ft_putchar(char c);
int		ft_printf(const char *first_arg, ...);
int		ft_unci(unsigned int nb, int count);
#endif
