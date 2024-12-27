/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 09:09:40 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-12-27 09:09:40 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthexa(unsigned long nbr, char c)
{
	int	cont;

	cont = 0;
	if (nbr >= 16)
	{
		cont += ft_printhexa(nbr / 16, c);
	}
	if (c == 'x')
		cont += ft_putchar("0123456789abcdef"[nbr % 16]);
	else
		cont += ft_putchar("0123456789ABCDEF"[nbr % 16]);
	return (cont);
}
