/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladiaz-g <ladiaz-g@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-03 18:02:52 by ladiaz-g          #+#    #+#             */
/*   Updated: 2024-12-03 18:02:52 by ladiaz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char format, ...);

// va_list
void	print_char(va_list args);
void	print_string(va_list args);
void	print_pointer(va_list args);
void	print_decimal(va_list args);
void	print_integer(va_list args);
void	print_unsigned(va_list args);
void	print_hexadecimal_lower(va_list args);
void	print_hexadecimal_upper(va_list args);
void	print_percentage(void);

#endif
