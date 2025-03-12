/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:56:06 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:15:42 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		ptr[i] = c;
		i++;
		n--;
	}
	return (ptr);
}

/*#include <string.h>
int	main()
{
	int	array [] = { 54, 85, 20, 63, 21 };
	int	array2 [] = { 54, 85, 20, 63, 21 };
	int	c = 0;
	size_t	size = sizeof( int ) * 5;
	int	length;

	for( length=0; length<5; length++)
	{
        	printf( "%d ", array[ length ] );
    	}
    	printf( "\n" );

	for( length=0; length<5; length++)
        {
                printf( "%d ", array2[ length ] );
        }
        printf( "\n\n" );

	memset(array, c, size);
	ft_memset(array2, c, size);
	
	for( length=0; length<5; length++)
	{
        	printf( "%d ", array[ length ] );
    	}
   	printf( "\n" );
	
	for( length=0; length<5; length++)
        {
                printf( "%d ", array2[ length ] );
        }
        printf( "\n" );
	return (0);
}*/
