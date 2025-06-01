/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 08:17:20 by osancak           #+#    #+#             */
/*   Updated: 2025/06/01 08:18:16 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	res;

	res = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			res++;
		while (*s && *s != c)
			s++;
	}
	return (res + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	res = ft_calloc(ft_count(s, c), sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (s[j] && s[j] != c)
			j++;
		if (*s)
			res[i] = ft_substr(s, 0, j);
		i++;
		s += j;
	}
	return (res);
}
