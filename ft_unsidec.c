/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsidec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:10:32 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/01/05 02:22:01 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unci(unsigned int nb, int count)
{
	long	n;

	n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
	if (nb == 0)
		count ++;
	else
	{
		while (nb > 0)
		{
			nb = nb / 10;
			count++;
		}
	}
	return (count);
}
