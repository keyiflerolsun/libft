/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:52:27 by osancak           #+#    #+#             */
/*   Updated: 2025/06/01 14:52:43 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_getstr(int n)
{
	char	*res;
	int		len;
	char	ito;

	ito = '\0';
	len = 0;
	if (n < 0)
	{
		ito = '-';
		len = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (len--)
		res[len] = 'g';
	if (ito)
		res[0] = ito;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	res = ft_getstr(n);
	if (!res)
		return (NULL);
	if (n < 0)
		n = n * -1;
	len = ft_strlen(res) - 1;
	while (res[len] != '-' && res[len])
	{
		res[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (res);
}
