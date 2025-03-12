/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidbaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:05:31 by lidbaha           #+#    #+#             */
/*   Updated: 2024/10/28 15:53:23 by lidbaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_len(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

char	*copy_str(const char *s, int start, int end)
{
	char	*str;

	str = ft_substr(s, start, (end - start));
	return (str);
}

void	free_tab(char **tab, int y)
{
	while (y >= 0)
	{
		free(tab[y]);
		y--;
	}
	free(tab);
}

int	ft_copy_str_tab(char **tab, const char *s, char c, int start)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > start)
		{
			tab[y] = copy_str(s, start, i);
			if (tab[y] == NULL)
			{
				free_tab(tab, y - 1);
				return (0);
			}
			y++;
		}
	}
	tab[y] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = malloc((ft_split_len(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	if (ft_copy_str_tab(tab, s, c, 0) == 0)
		return (NULL);
	return (tab);
}

/*#include <stdio.h>
int	main()
{
	const char	*src = "abc def ghi";
	char	c = ' ';
	char	**r;
	int	i;

	r = ft_split(src, c);
	i = 0;
	while (r[i] != NULL)
	{
		printf("%s\n", r[i]);
		i++;
	}
	return (0);
}*/
