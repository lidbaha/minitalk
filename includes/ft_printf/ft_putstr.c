/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:26:53 by lidbaha           #+#    #+#             */
/*   Updated: 2024/11/21 14:24:32 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str == NULL)
		len = ft_putstr("(null)");
	while (str != NULL && str[i] != '\0')
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}
