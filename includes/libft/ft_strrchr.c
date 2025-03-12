/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:24:53 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:22:21 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}

/*#include <string.h>
int	main()
{
	char	*str = "test";
	char	find = 't';

	printf("%s\n", strrchr(str, find));
	printf("%s", ft_strrchr(str, find));
	return (0);
}*/
