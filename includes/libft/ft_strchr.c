/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:09:07 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:15:51 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str[i]);
	return (NULL);
}

/*#include <string.h>
int	main()
{
	char	*str = "test";
	char	find = 'e';

	printf("%s\n", strchr(str, find));
	printf("%s", ft_strchr(str, find));
	return (0);
}*/
