/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:54:31 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/28 19:56:55 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;
	size_t	i;

	source = (char *)src;
	dst = (char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dst > source)
		while (n-- > 0)
			dst[n] = source[n];
	else
	{
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dest);
}

/*#include <string.h>
int	main()
{
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
	int data2[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
	int len = 10;

	for(int i=0; i<len; i++ )
	{
		printf( "%d ", data[i] );
	}
	
	printf("\n");
	
	for(int i=0; i<len; i++ )
	{
		printf( "%d ", data2[i] );
	}

	printf("\n\n");

	void * source = (void *) data;
	void * destination = (void *) ( data + 1 );

	void * source2 = (void *) data2;
	void * destination2 = (void *) ( data2 + 1 );
	
	size_t size = len - 1 * sizeof( int );
	
	memmove(destination, source, size);
	ft_memmove(destination2, source2, size);
	
	data[0] = 10;
	data2[0] = 10;
	
	for( int i=0; i<len; i++ ) {
		printf( "%d ", data[i] );
	}

	printf("\n");

	for( int i=0; i<len; i++ ) {
		printf( "%d ", data2[i] );
	}

	return (0);
}*/
