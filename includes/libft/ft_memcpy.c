/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:57:46 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/28 19:56:11 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;
	int				i;

	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		dst[i] = source[i];
		i++;
		n--;
	}
	return (dst);
}

/*#include <string.h>
#include <stdlib.h>
int	main()
{
	int	array [] = { 54, 85, 20, 63, 21 };
	int	*copy = NULL;
	int	*copy2 = NULL;
    	int	length = sizeof( int ) * 5;
	
	copy = (int *) malloc( length );
	copy2 = (int *) malloc( length );
	memcpy( copy, array, length );
	ft_memcpy(copy2, array, length);
	for( length=0; length<5; length++ )
	{
		printf( "%d ", copy[ length ] );
	}
	printf( "\n" );
	for( length=0; length<5; length++ )
        {
                printf( "%d ", copy2[ length ] );
        }
	free( copy );
	free(copy2);
	return (0);
}*/
