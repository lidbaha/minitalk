/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:08:21 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/21 14:18:20 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putnbr(int nb, int len);
int	ft_check_command(char c, va_list args);
int	ft_check_str(char *str, va_list	args);
int	ft_putnbr_unsigned(unsigned int nb, int len);
int	ft_putnbr_hexa_lower(int nb);
int	ft_putnbr_hexa_upper(int nb);
int	ft_putptr(unsigned long ptr);
#endif