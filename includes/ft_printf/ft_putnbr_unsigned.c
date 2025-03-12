/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:27:37 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/21 14:09:06 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb, int len)
{
	if (nb >= 10)
		len = ft_putnbr_unsigned(nb / 10, len);
	nb = (nb % 10) + '0';
	len += ft_putchar(nb);
	return (len);
}
