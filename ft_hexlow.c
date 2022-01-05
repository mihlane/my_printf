/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:10:41 by mhabibi-          #+#    #+#             */
/*   Updated: 2021/12/20 15:12:12 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned long long a)
{
	int	count;

	count = 0;
	while (a >= 16)
	{
		a = a / 16;
		count++;
	}
	return (count);
}

static char	ft_check(int r)
{
	if (r >= 10 && r <= 15)
		return (r + 87);
	else
		return ((int)r % 16 + '0');
}

int	ft_hexlow(unsigned long n)
{
	unsigned long long	f;
	int					r;
	int					count;
	char				*str;
	int					count2;

	f = n;
	count = ft_count(f);
	count2 = count;
	str = malloc(count + 10);
	str[count + 1] = '\0';
	while (f > 15)
	{
		r = f % 16;
		f = f / 16;
		str[count] = ft_check(r);
		count--;
	}
	str[count] = ft_check(f);
	ft_putstr(str, count);
	free(str);
	return (count2 + 1);
}
