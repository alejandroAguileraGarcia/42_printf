/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:34:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/05/10 18:26:50 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

void	ft_putchar_i(char c, int *i);
void	ft_putint_i(int nb, int *i2);
void	ft_putstr_i(char *str, int *i2);
void	ft_putui_i(unsigned int nb, int *i);
void	ft_puthex(unsigned long long nb, int *i, char *base);
int		ft_printf(const char *str, ...);

#endif
