/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:17:54 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:15:20 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}

/*#include <string.h>
int	main()
{
	int	array [] = { 54, 85, 20, 63, 21 };
	int     array2 [] = { 54, 85, 20, 63, 21 };
	size_t	size = sizeof( int ) * 5;
	int length;

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

	bzero(array, size);
	ft_bzero(array2, size);

	for( length=0; length<5; length++)
	{
        	printf( "%d ", array[ length ] );
    	}
	printf("\n");
	for( length=0; length<5; length++)
        {
                printf( "%d ", array2[ length ] );
        }
	return (0);
}*/
