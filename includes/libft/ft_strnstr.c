/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:36:52 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:21:30 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	char	*find;
	size_t	i;
	size_t	j;

	str = (char *)big;
	find = (char *)little;
	i = 0;
	if (find[0] == '\0')
		return (str);
	while (str[i] != '\0' && len > i)
	{
		j = 0;
		while (find[j] != '\0' && str[i + j] == find[j] && (i + j) < len)
		{
			j++;
			if (find[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*#include <bsd/string.h>
int	main()
{
	const char	*str = "Foo Bar Baz";
	const char	*find = "Bar";
	char	*ptr;
	char	*ptr2;
	
	ptr = ft_strnstr(str, find, 11);
	ptr2 = strnstr(str, find, 11);
	printf("%s\n%s", ptr, ptr2);
	return (0);
}*/
