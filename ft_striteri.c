/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:47:44 by osancak           #+#    #+#             */
/*   Updated: 2025/06/15 00:04:33 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
