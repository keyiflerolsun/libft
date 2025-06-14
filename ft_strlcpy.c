/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:03:32 by osancak           #+#    #+#             */
/*   Updated: 2025/06/15 00:04:37 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = -1;
	while (++counter < size - 1 && src[counter] && size)
		dst[counter] = src[counter];
	if (counter < size)
		dst[counter] = '\0';
	return (ft_strlen(src));
}
