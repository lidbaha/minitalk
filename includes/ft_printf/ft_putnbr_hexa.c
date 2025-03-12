/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:37:14 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/29 12:00:00 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_lower(int nb)
{
	const char			*base_hexa;
	int					i;
	int					len;
	char				result[16];
	unsigned int		n;

	n = nb;
	i = 0;
	len = 0;
	base_hexa = "0123456789abcdef";
	if (n == 0)
		len += write(1, "0", 1);
	while (n > 0)
	{
		result[i++] = base_hexa[n % 16];
		n = n / 16;
	}
	while (i > 0)
		len += write(1, &result[--i], 1);
	return (len);
}

int	ft_putnbr_hexa_upper(int nb)
{
	const char			*base_hexa;
	int					i;
	int					len;
	char				result[16];
	unsigned int		n;

	n = nb;
	i = 0;
	len = 0;
	base_hexa = "0123456789ABCDEF";
	if (n == 0)
		len += write(1, "0", 1);
	while (n > 0)
	{
		result[i++] = base_hexa[n % 16];
		n = n / 16;
	}
	while (i > 0)
		len += write(1, &result[--i], 1);
	return (len);
}
