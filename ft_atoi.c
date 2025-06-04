/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:46:28 by osancak           #+#    #+#             */
/*   Updated: 2025/05/29 17:18:22 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	toi;
	int	sig;

	sig = 1;
	toi = 0;
	while (*nptr && ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' '))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sig *= -1;
	while (*nptr && ft_isdigit(*nptr))
		toi = toi * 10 + (*nptr++ - '0');
	return (toi * sig);
}
