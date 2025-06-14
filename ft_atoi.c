/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:46:28 by osancak           #+#    #+#             */
/*   Updated: 2025/06/15 00:03:54 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	toi;
	int			sig;

	sig = 1;
	toi = 0;
	while (*nptr && ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' '))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sig *= -1;
	while (*nptr && ft_isdigit(*nptr))
		toi = toi * 10 + (*nptr++ - '0');
	if (toi * sig > 2147483647)
		return (-1);
	if (toi * sig < -2147483648)
		return (0);
	return (toi * sig);
}
