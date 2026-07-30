/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:34:58 by nilim             #+#    #+#             */
/*   Updated: 2026/07/30 12:39:37 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t						i;
	unsigned char	*restrict	d;
	unsigned char	*restrict	s;

	d = (unsigned char *restrict) dest;
	s = (unsigned char *restrict) src;
	if (s == d)
		return (d);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
