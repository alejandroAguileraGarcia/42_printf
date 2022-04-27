/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:16:29 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/27 17:32:36 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
