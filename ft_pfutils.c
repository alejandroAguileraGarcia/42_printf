/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:23:22 by aaguiler          #+#    #+#             */
/*   Updated: 2022/05/10 18:25:44 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

void	ft_putchar_i(char c, int *i)
{
	write(1, &c, 1);
	*i += 1;
}

void	ft_puthex(unsigned long long nb, int *i, char *base)
{
	if (nb >= 16)
		ft_puthex(nb / 16, i, base);
	ft_putchar_i(base[nb % 16], i);
}

void	ft_putui_i(unsigned int nb, int *i)
{
	if (nb >= 10)
	{
		ft_putui_i(nb / 10, i);
		nb %= 10;
	}
	ft_putchar_i(nb + '0', i);
}

void	ft_putstr_i(char *str, int *i2)
{
	int	i;

	if (!str)
	{
		ft_putstr_i("(null)", i2);
		return ;
	}
	i = 0;
	while (str[i])
		ft_putchar_i(str[i++], i2);
}

void	ft_putint_i(int nb, int *i)
{
	long long	nbr;

	nbr = (long long)nb;
	if (nbr < 0)
	{
		ft_putchar_i('-', i);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putint_i(nbr / 10, i);
		nbr %= 10;
	}
	ft_putchar_i(nbr + '0', i);
}
