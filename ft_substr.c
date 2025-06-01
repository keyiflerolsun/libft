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
	char	*res;
	int		i;

	if (ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	if (len >= ft_strlen(s))
		i = ft_strlen(s) - start + 1;
	else
		i = len + 1;
	res = malloc(i * sizeof(char));
	if (!res)
		return (NULL);
	while (*s && start--)
		s++;
	i = 0;
	while (*s && len--)
		res[i++] = *s++;
	res[i] = '\0';
	return (res);
}
