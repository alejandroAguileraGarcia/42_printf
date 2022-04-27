/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:31:17 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/27 16:46:35 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_i(unsigned long long nb, int *i)
{
	if (nb >= 16)
	{
		ft_puthex_i(nb / 16, i);
	}
	ft_putchar_i("0123456789abcdef"[nb % 16], i);
}
