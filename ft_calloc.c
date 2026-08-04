/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 10:52:50 by nilim             #+#    #+#             */
/*   Updated: 2026/08/04 11:36:06 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*block;

	if (n * size > 2147483647 || n * size == 0)
		return (NULL);
	else
		block = malloc(n * size);
	if (block == NULL)
		return (NULL);
	ft_bzero(block, n * size);
	return (block);
}
