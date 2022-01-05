/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:52:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/01/05 02:28:51 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check2(char first_arg, va_list ptr, int count);

int	ft_check_percent(char first_arg, va_list ptr, int count)
{
	count = 0;
	if (first_arg == 's')
		count = (ft_putstr(va_arg(ptr, char *), count));
	else if (first_arg == 'c')
	{
		ft_putchar(va_arg(ptr, int));
		count += 1;
	}
	else if (first_arg == 'd')
		count = ft_putnbr(va_arg(ptr, int), count);
	else if (first_arg == 'i')
		count = ft_putnbr(va_arg(ptr, int), count);
	else if (first_arg == 'X')
		count = ft_hexup(va_arg(ptr, unsigned int));
	else if (first_arg == 'x')
		count = ft_hexlow(va_arg(ptr, unsigned int));
	else if (first_arg == 'u')
		count = ft_unci(va_arg(ptr, unsigned int), count);
	else
		count = ft_check2(first_arg, ptr, count);
	return (count);
}

int	ft_check2(char first_arg, va_list ptr, int count)
{
	if (first_arg == 'p')
	{
		count = ft_putstr("0x", count);
		count += ft_hexlow(va_arg(ptr, unsigned long));
	}
	else if ((first_arg) == '%')
	{
		ft_putchar('%');
		count++;
	}
	return (count);
}

int	ft_printf(const char *first_arg, ...)
{
	int		count;
	int		count2;
	va_list	ptr;

	count = 0;
	count2 = 0;
	va_start(ptr, first_arg);
	while (*first_arg != '\0')
	{
		if (*first_arg == '%')
		{
			count2 += (ft_check_percent(*(first_arg + 1), ptr, count));
			first_arg += 2;
		}
		else
		{
			ft_putchar(*first_arg++);
			count++;
		}
	}
	va_end(ptr);
	return (count + count2);
}
