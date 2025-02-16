/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 12:17:54 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-12-27 12:17:54 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *type, va_list args)
{
	int	i;

	i = 0;
	if (*type == 'c')
		i += ft_putchar_fd(va_arg(args, int), 1);
	else if (*type == 's')
		i += ft_putstr_fd(va_arg(args, char *), 1);
	else if (*type == 'd' || *type == 'i')
		i += ft_putnbr_fd(va_arg(args, int), 1);
	else if (*type == 'u')
		i += ft_putunsigned(va_arg(args, int));
	else if (*type == 'p')
		i += ft_putptr(va_arg(args, void *));
	else if (*type == 'x' || *type == 'X')
		i += ft_puthexa(va_arg(args, unsigned int), *type);
	else if (*type == '%')
		i += ft_putchar_fd('%', 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		l;

	if (!str)
		return (0);
	l = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			l += ft_format(str, args);
		}
		else
			l += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(args);
	return (l);
}
