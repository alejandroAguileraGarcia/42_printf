/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:29:51 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/27 17:32:40 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

void	ft_putstr_i(char *str, int *i2)
{
	int		i;

	if (!str)
	{
		ft_putstr_i("(null)", i2);
		return ;
	}
	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
	*i2 += i;
}
