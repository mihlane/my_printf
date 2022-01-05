/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:26:39 by mhabibi-          #+#    #+#             */
/*   Updated: 2021/12/21 15:30:57 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(long nb)
{
	int	count2;

	count2 = 0;
	if (nb > 0)
	{
		while (nb > 0)
		{
			nb = nb / 10;
			count2++;
		}
	}
	else if (nb == 0)
		count2++;
	else if (nb < 0)
	{
		nb *= -1;
		count2 += 1;
		while (nb > 0)
		{
			nb = nb / 10;
			count2++;
		}
	}
	return (count2);
}

int	ft_putnbr(int nb, int count)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
	count = ft_count(nb);
	return (count);
}
