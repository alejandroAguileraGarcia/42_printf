/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:05:55 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/26 20:38:35 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_putchar(char c, int *i);
void	ft_putint(int nb, int *i2);
void	ft_putnbr_base(unsigned int n, char *base, int *i);
void	ft_putstr(char *str, int *i2);

void	ft_print_all(const char *str, int *i, va_list args)
{
	if ((char)(str + 1) == '%')
		ft_putchar('%', i);
	else if ((char)(str + 1) == 'c')
		ft_putchar(va_arg(args, int), i);
	else if ((char)(str + 1) == 's')
		ft_putstr(va_arg(args, char *), i);
	//else if ((char)(str + 1) == 'p')
		//ft_puthex(va_arg(args, void *), i);
	else if ((char)(str + 1) == 'd' || (char)(str + 1) == 'i')
		ft_putint(va_arg(args, int), i);
	//else if ((char)(str + 1) == 'u')
		//ft_putnbr(va_arg(args, unsigned int), i);
	else if ((char)(str + 1) == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", i);
	else if ((char)(str + 1) == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while ((char)str[j] != '\0')
	{
		if ((char)str[j] == '%')
		{
			ft_print_all (str, &i, args);
			i -= 2;
		}
		i++;
			puts("LLEGO");
		j++;
		str++;
	}
	return (i);
}

int	main(void)
{
	ft_printf("%c %d %s", 'c', 3, "oca");
}
