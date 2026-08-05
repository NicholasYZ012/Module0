/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:28:19 by nilim             #+#    #+#             */
/*   Updated: 2026/08/05 13:35:06 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tgt;

	i = 0;
	tgt = (unsigned char *)s;
	while (i < n)
	{
		tgt[i] = 0;
		i++;
	}
}
