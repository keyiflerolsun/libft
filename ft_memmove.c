/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:16:36 by osancak           #+#    #+#             */
/*   Updated: 2025/06/15 00:04:20 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	if (dest == src || n == 0)
		return (dest);
	dst_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		dst_cpy += n - 1;
		src_cpy += n - 1;
		while (n--)
			*dst_cpy-- = *src_cpy--;
	}
	return (dest);
}
