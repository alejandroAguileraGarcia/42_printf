/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:25:49 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/27 15:46:52 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putui_i(unsigned int nb, int *i)
{
	if (nb >= 10)
	{
		ft_putui_i(nb / 10, i);
		nb %= 10;
	}
	ft_putchar_i(nb + '0', i);
}
