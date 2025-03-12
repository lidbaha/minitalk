/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:11:07 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:33:00 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	return (16384);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	char test = '\n';
	printf("%d\n", isprint(test));
	printf("%d", ft_isprint(test));
	return (0);
}*/
