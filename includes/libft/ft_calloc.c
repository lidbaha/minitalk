/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:14:53 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/25 19:17:35 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main()
{
	int i;
	int int_nbr = 0;
    	int * pointer = (int *) ft_calloc( int_nbr, sizeof(int) );
	
	for (i=0; i<int_nbr; i++ )
	{
		printf( "%d ", pointer[i] );
	}
	printf( "\n" );
	free( pointer );
	return (0);
}*/
