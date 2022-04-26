/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:29:37 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/26 20:21:26 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	no_error;
	int	cont;
	int	cont2;

	cont = 0;
	no_error = 1;
	while (base[cont] != '\0' && no_error)
	{
		cont2 = cont + 1;
		if (base[cont] == '+' || base[cont] == '-')
			no_error = 0;
		while (base[cont2] != '\0' && no_error)
		{
			if (base[cont] == base[cont2])
				no_error = 0;
			cont2++;
		}
		cont++;
	}
	if (cont < 2)
		no_error = 0;
	return (no_error);
}

int	n_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	print_number(unsigned int nbr, char *base, int num_base)
{
	char	imp;

	if (nbr / num_base != 0)
		print_number(nbr / num_base, base, num_base);
	imp = base[nbr % num_base];
	write(1, &imp, 1);
}

int	ft_nblen(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_base(unsigned int n, char *base, int *i)
{
	int		no_error;
	int		num_base;

	no_error = check_base(base);
	if (no_error)
	{
		num_base = n_base(base);
		print_number(n, base, num_base);
	}
	*i += ft_nblen(n);
}
