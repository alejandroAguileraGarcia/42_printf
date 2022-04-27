/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:34:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/27 15:49:39 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H

# define FT_PRINT_H

void	ft_putchar_i(char c, int *i);
void	ft_putint_i(int nb, int *i2);
void	ft_putnbr_base_i(unsigned int n, char *base, int *i);
void	ft_putstr_i(char *str, int *i2);
void	ft_putui_i(unsigned int nb, int *i);
void	ft_puthex_i(unsigned long long nb, int *i);
int		ft_printf(const char *, ...);

#endif