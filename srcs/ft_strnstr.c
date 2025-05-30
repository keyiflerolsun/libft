/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 22:45:56 by osancak           #+#    #+#             */
/*   Updated: 2025/05/28 18:51:07 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = -1;
	if (!*little)
		return ((char *)big);
	while (big[++i] && i < len)
	{
		j = -1;
		if (big[i] == little[++j])
		{
			temp = i;
			while (big[i] && big[i] == little[j] && (i++ < len) && len > 0)
				j++;
			if (!little[j] && len > 0)
				return ((char *)&big[temp]);
			i = temp;
		}
	}
	return (NULL);
}
