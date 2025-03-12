/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:11:07 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:19:33 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return (str + i);
		}
		i++;
		n--;
	}
	return (NULL);
}

/*#include <string.h>
int	main()
{
	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	const unsigned int size = 10;

	printf("%p\n", memchr(data, 50, size));
	printf("%p", ft_memchr(data, 50, size));
	return (0);
}*/
