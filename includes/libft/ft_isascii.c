/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:45:27 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:30:32 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int	main()
{
	char test = 0x80;
	printf("%d\n",isascii(test));
	printf("%d",ft_isascii(test));
	return (0);
}*/
