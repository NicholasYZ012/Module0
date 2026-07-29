/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:34:58 by nilim             #+#    #+#             */
/*   Updated: 2026/07/29 10:25:50 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memcpy(void dest[restrict n], const void src[restrict n], size_t n)
{
    size_t  i;

    if (src == dest)
        return (dest);
    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (src);
}