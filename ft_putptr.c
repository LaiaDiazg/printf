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

//%p El puntero void * dado como argumento se imprime en formato hexadecimal.
//0x standard to indicate that the number following is hexadecimal
int	ft_putptr(unsigned long nbr)
{
	int	cont;

	cont = 0;
	cont += ft_putstr("0x");
	cont += ft_printhexa(nbr, 'x');
	return (cont);
}
