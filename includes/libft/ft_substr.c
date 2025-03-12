/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:30:45 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:17:20 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	result = ft_calloc(len + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}

/*int	main()
{
	char	*str = "ceci est la string a extraire";
	unsigned int	i = 5;
	size_t len = 30;
	printf("%s", ft_substr(str, i, len));
	return (0);
}*/
