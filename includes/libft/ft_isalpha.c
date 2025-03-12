/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:51 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:32:32 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	return (1024);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	char test = 'l';
	printf("%d\n", isalpha(test));
	printf("%d", ft_isalpha(test));
	return (0);
}*/
