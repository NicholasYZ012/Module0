/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 12:01:10 by nilim             #+#    #+#             */
/*   Updated: 2026/08/04 12:56:09 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	n;
	size_t	i;

	n = ft_strlen(str);
	i = 0;
	while (i < (size_t)ft_strlen(str))
	{
		if (str[n] == c)
			return ((char *)&(str[n]));
		n--;
		i++;
	}
	return (NULL);
}
