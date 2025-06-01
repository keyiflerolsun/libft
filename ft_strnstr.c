/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 22:45:56 by osancak           #+#    #+#             */
/*   Updated: 2025/06/01 07:35:03 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (!*little)
		return ((char *)big);
	b = -1;
	while (big[++b] && b < len)
	{
		l = 0;
		while (big[b + l] == little[l] && b + l < len)
			if (!little[l++ + 1])
				return ((char *)&big[b]);
	}
	return (NULL);
}
