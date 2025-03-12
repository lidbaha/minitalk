/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:20:31 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:18:12 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		len;

	len = ft_strlen((char *)s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = 0;
	while (len >= 0)
	{
		result[len] = s[len];
		len--;
	}
	return (result);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char	*str = "test";
	char	*str2 = ft_strdup(str);
	printf("%p\n%p\n\n%s\n%s", str, str2, str, str2);
	return (0);
}*/
