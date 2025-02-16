/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 09:11:00 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-12-27 09:11:00 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Prints a pointer address in hexadecimal format
 * @nbr: The memory address to print.
 */
int	ft_putptr(void *nbr)
{
	int	cont;

	if (!nbr)
		return (ft_putstr_fd("(nil)", 1));
	cont = 0;
	cont += ft_putstr_fd("0x", 1);
	cont += ft_puthexa((unsigned long)nbr, 'x');
	return (cont);
}
