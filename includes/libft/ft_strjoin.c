/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <lidbaha@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:50:32 by lidbaha           #+#    #+#             */
/*   Updated: 2025/01/29 09:27:05 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len_str1;
	int		len_result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_str1 = ft_strlen(s1) + 1;
	len_result = ft_strlen(s2) + len_str1;
	result = ft_calloc(len_result, sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcat(result, s1, len_str1);
	ft_strlcat(result, s2, len_result);
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str1 = "abc";
	char	*str2 = "def";
	
	printf("%s", ft_strjoin(str1, str2));
	return (0);
}*/
