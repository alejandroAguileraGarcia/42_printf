/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:25:49 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/27 17:32:42 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putui_i(unsigned int nb, int *i)
{
	if (nb >= 10)
	{
		ft_putui_i(nb / 10, i);
		nb %= 10;
	}
	ft_putchar_i(nb + '0', i);
}
