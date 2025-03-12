/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:50:22 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:20:15 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 122 || c < 97)
		return (c);
	return (c - 32);
}

/*#include <stdio.h>
#include <ctype.h>
int	main()
{
	char test = 'n';

	printf("%d\n", toupper(test));
	printf("%d", ft_toupper(test));
	return (0);
}*/
