/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:58:06 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/28 09:20:36 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	const char		*hexa;
	char			result[16];
	int				i;
	int				len;

	hexa = "0123456789abcdef";
	i = 0;
	len = 0;
	if (!ptr)
		len += write(1, "(nil)", 5);
	if (ptr != 0)
	{
		while (ptr > 0)
		{
			result[i++] = hexa[ptr % 16];
			ptr = ptr / 16;
		}
		len += write(1, "0x", 2);
		while (i > 0)
			len += write(1, &result[--i], 1);
	}
	return (len);
}
