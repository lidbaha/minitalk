/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:58:54 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:15:10 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	result = malloc((end - start + 2) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (s1 + start), (end - start + 2));
	return (result);
}

/*int	main()
{
	char const *str = "++++test++";
	char const *remove = "+";
	char *result = ft_strtrim(str, remove);
	printf("%s", result);
	return (0);
}*/
