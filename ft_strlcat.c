/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 21:06:44 by nilim             #+#    #+#             */
/*   Updated: 2026/08/05 12:51:35 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnlen(const char *str, size_t n)
{
	int	c;

	c = 0;
	while (str[c] && c < n)
		c++;
	return (c);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		n;
	int		dsize;
	size_t	orilength;

	n = 0;
	dsize = ft_strlen(dst);
	orilength = ft_strnlen(dst, size) + ft_strlen(src);
	while (n < dsize)
		n++;
	while (n < size - 1)
	{
		dst[n] = *src;
		n++;
		src++;
	}
	dst[n] = '\0';
	return (orilength);
}
