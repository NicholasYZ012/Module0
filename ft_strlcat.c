/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 21:06:44 by nilim             #+#    #+#             */
/*   Updated: 2026/07/31 23:52:23 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

static size_t	ft_strnlen(const char *str, size_t n)
{
	size_t	c;

	c = 0;
	while (str[c] && c < n)
		c++;
	return (c);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	dsize;
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
