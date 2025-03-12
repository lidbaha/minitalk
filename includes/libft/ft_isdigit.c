/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:54 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:32:50 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > '9' || c < '0')
	{
		return (0);
	}
	return (2048);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	char test = 'i';
	printf("%d\n", isdigit(test));
	printf("%d", ft_isdigit(test));
	return (0);
}*/
