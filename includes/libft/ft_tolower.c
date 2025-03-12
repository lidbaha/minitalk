/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:03:06 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:19:05 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 90 || c < 65)
		return (c);
	return (c + 32);
}

/*#include <stdio.h>
#include <ctype.h>
int     main()
{
        char test = 'W';

        printf("%d\n", tolower(test));
        printf("%d", ft_tolower(test));
        return (0);
}*/
