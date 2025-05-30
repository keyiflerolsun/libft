/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:03:32 by osancak           #+#    #+#             */
/*   Updated: 2025/05/30 20:08:22 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	while (counter < size - 1 && src[counter] && size)
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (counter < size)
		dst[counter] = '\0';
	return (ft_strlen(src));
}
