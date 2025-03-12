/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:29:47 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/21 13:11:46 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int len)
{
	if (nb == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putchar('2');
		return (ft_putnbr(147483648, len));
	}
	else
	{
		if (nb < 0)
		{
			len += ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			len = ft_putnbr(nb / 10, len);
		}
		len += ft_putchar((nb % 10) + '0');
	}
	return (len);
}
