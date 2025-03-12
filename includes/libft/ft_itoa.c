/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:08:06 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:17:48 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*result;
	int			len;

	nb = n;
	len = ft_len(nb);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
	}
	result[len] = '\0';
	while (--len >= (n < 0))
	{
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

/*#include <stdio.h>
int	main()
{
	int	nb = -12345;
	char	*str;
	str = ft_itoa(nb);
	printf("%s", str);;
	return (0);
}*/
