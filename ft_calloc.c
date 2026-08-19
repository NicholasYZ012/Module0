/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 10:52:50 by nilim             #+#    #+#             */
/*   Updated: 2026/08/19 10:04:57 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*block;
	size_t	i;

	i = 0;
	if (n == 0 || size == 0 || n > (size_t)-1 / size)
		return (NULL);
	block = malloc(n * size);
	if (block == NULL)
		return (NULL);
	while (i < n * size)
	{
		block[i] = 0;
		i++;
	}
	return ((void *)block);
}
