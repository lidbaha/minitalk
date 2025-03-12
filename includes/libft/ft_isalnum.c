/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:04:10 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:32:03 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		&& (c < '0' || c > '9'))
	{
		return (0);
	}
	return (8);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	char test = '.';
	printf("%d\n", isalnum(test));
	printf("%d", ft_isalnum(test));
	return (0);
}*/
