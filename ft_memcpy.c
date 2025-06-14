/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:24:24 by osancak           #+#    #+#             */
/*   Updated: 2025/06/15 00:04:18 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	if (!dest && !src)
		return (dest);
	dst_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	while (n--)
		*dst_cpy++ = *src_cpy++;
	return (dest);
}
