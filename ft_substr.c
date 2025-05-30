/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:53:26 by osancak           #+#    #+#             */
/*   Updated: 2025/05/30 22:07:42 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*str;
	unsigned char	*res;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	if (ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	if (len >= ft_strlen(s))
		res = malloc((sizeof(char) * (ft_strlen(s) - start + 1)));
	else
		res = malloc((sizeof(char) * (len + 1)));
	if (!res)
		return (NULL);
	while (*str && start--)
		str++;
	while (*str && len--)
		res[i++] = *str++;
	res[i] = '\0';
	return ((char *)res);
}
