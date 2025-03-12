/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:52:19 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:20:34 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
		n--;
	}
	return (0);
}

/*#include <string.h>
int	main()
{
	int array1 [] = { 54, 85, 20, 63, 21 };
    	int array2 [] = { 54, 85, 10, 63, 21 };
    	size_t size = sizeof( int ) * 5;

	printf("%d\n", memcmp(array1, array2, size));
	printf("%d\n", memcmp(array1, array1, size));
	printf("%d\n\n", memcmp(array2, array1, size));

	printf("%d\n", memcmp(array1, array2, size));
        printf("%d\n", memcmp(array1, array1, size));
        printf("%d", memcmp(array2, array1, size));
	return (0);
}*/
