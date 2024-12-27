/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 09:10:18 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-12-27 09:10:18 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Imprime un número decimal (base 10) sin signo.
int	ft_putunsigned(unsigned long int nbr)
{
	int	cont;
	int	aux;

	cont = 0;
	aux = 0;
	if (nbr >= 0 && nbr <= 9)
	{
		aux += ft_putchar(nbr + '0');
		cont += aux;
	}
	else
	{
		aux = ft_printunsigned(nbr / 10);
		cont += aux;
		aux = ft_printunsigned(nbr % 10);
		cont += aux;
	}
	return (cont);
}
