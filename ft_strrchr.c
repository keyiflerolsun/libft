/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:34:30 by osancak           #+#    #+#             */
/*   Updated: 2025/06/15 00:04:45 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	char		chr;

	chr = c;
	last = NULL;
	while (*s)
	{
		if (*s == chr)
			last = s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return ((char *)last);
}
