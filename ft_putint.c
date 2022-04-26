/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:16:29 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/26 20:24:57 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	negative(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	return (nb);
}

int	ncifras(int nb)
{
	int	cifras;

	cifras = 0;
	while (nb > 0)
	{
		cifras++;
		nb /= 10;
	}
	return (cifras);
}

int	pow2(int n, int n2)
{
	int	i;

	if (n2 == 0)
	{
		return (1);
	}
	i = 0;
	while (i < (n2 - 1))
	{
		n = n * 10;
		i++;
	}
	return (n);
}

void	ft_putint(int nb, int *i2)
{
	int	cifras;
	int	i;
	int	cifras_aux;
	int	cifra_imp;

	if (nb < 0)
	*i2 += 1;
	nb = negative(nb);
	cifras = ncifras(nb);
	cifras_aux = cifras;
	i = 0;
	while (i < cifras)
	{
		cifra_imp = nb / pow2(10, cifras_aux - 1);
		nb = nb % pow2(10, cifras_aux - 1);
		cifras_aux--;
		cifra_imp += 48;
		write(1, &cifra_imp, 1);
		i++;
	}
	*i2 += cifras;
}
