/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 10:52:57 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-09-21 10:52:57 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Writes a single cazharacter to the specified file descriptor.
 * @c: The character to be printed.
 * @fd: The file descriptor where the character will be sent.
 */
int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

/**
 * Writes a string to the specified file descriptor.
 * @s: The string to be printed.
 * @fd: The file descriptor where the string will be sent.
 */
int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
		i += ft_putchar_fd(s[i], fd);
	return (i);
}
