/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:49:55 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:22:11 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = 0;
	while (dst[dst_len] != '\0')
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	len = 0;
	i = 0;
	if (size > dst_len)
		len = src_len + dst_len;
	else
		len = src_len + size;
	while (src[i] && (dst_len + 1) < size)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (len);
}

/*#include <bsd/string.h>
int	main(void)
{
	char	dst[] = "test";
	char	src[] = "++";
	char	dst2[] = "test";
	char	src2[] = "++";
	unsigned int	size = 0;
	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%zu", strlcat(dst2, src2, size));
	return (0);
}*/
