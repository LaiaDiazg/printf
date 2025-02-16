/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 11:16:09 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-21 11:16:09 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Writes an integer (base 10) to the specified file descriptor.
 * @n: The integer to print.
 * @fd: The file descriptor where the number will be written.
 */
int	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	char		res;
	int			counter;

	number = n;
	counter = 0;
	if (number < 0)
	{
		counter += ft_putchar_fd('-', fd);
		number *= (-1);
	}
	if (number >= 10)
	{
		counter += ft_putnbr_fd(number / 10, fd);
		counter += ft_putnbr_fd(number % 10, fd);
	}
	else
	{
		res = number + '0';
		counter += ft_putchar_fd(res, fd);
	}
	return (counter);
}

/**
 * Prints an unsigned decimal number (base 10).
 * @num: The unsigned integer to print.
 */
int	ft_putunsigned(unsigned int num)
{
	char	c;
	int		len;

	len = 0;
	if (num > 9)
		len += ft_putunsigned(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
	return (len + 1);
}

/**
 * Prints a hexadecimal number (base 16).
 * @nbr: The number to print in hexadecimal.
 * @c: Specifies the format ('x' for lowercase, 'X' for uppercase).
 */
int	ft_puthexa(unsigned long nbr, char c)
{
	int	cont;

	cont = 0;
	if (nbr >= 16)
	{
		cont += ft_puthexa(nbr / 16, c);
	}
	if (c == 'x')
		cont += ft_putchar_fd("0123456789abcdef"[nbr % 16], 1);
	else
		cont += ft_putchar_fd("0123456789ABCDEF"[nbr % 16], 1);
	return (cont);
}
