/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:46:30 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:14:53 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;
	char			*source;
	char			*dest;

	i = 0;
	len = 0;
	dest = (char *)dst;
	source = (char *)src;
	while (source[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (source[i] != '\0' && i < (size - 1))
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*#include <stdlib.h>
int	main()
{
	size_t	i = 4;
	char	*dest = malloc(sizeof(char) * i + 1);
	const char	*src = "test";
	printf("%zu", strlcpy(dest, src, i));
	return (0);
}*/
