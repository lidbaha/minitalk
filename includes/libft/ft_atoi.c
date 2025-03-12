/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:52:50 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/28 20:42:53 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_result(char *str, int i)
{
	int	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		i;
	int		sign;
	int		sign_changed;

	i = 0;
	sign = 1;
	sign_changed = 0;
	str = (char *)nptr;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (sign_changed > 0)
			return (0);
		if (str[i] == '-')
		{
			sign = -sign;
		}
		sign_changed = 1;
		i++;
	}
	return (ft_result(str, i) * sign);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char* test = "--56";
	printf("%d\n", atoi(test));
	printf("%d", ft_atoi(test));
	return (0);
}*/
