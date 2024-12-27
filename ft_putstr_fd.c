/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 10:55:11 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-21 10:55:11 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the string 's' to the file descriptor specified.
//%s Imprime una string (como se define por defecto en C).

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
}
