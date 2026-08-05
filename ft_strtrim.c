/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:53:27 by nilim             #+#    #+#             */
/*   Updated: 2026/08/04 16:40:44 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_trimbegin(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
	}
	return (i);
}

static unsigned int	ft_trimend(const char *s1, const char *set)
{
	unsigned int	end;
	unsigned int	j;

	end = ft_strlen(s1) - 1;
	while (end)
	{
		j = 0;
		while (set[j])
		{
			if (s1[end] == set[j])
			{
				end--;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	begin;
	unsigned int	end;

	if (*s1 == '\0')
		return ("");
	begin = ft_trimbegin(s1, set);
	end = ft_trimend(s1, set);
	if (end - begin + 1 <= 0 || s1[begin] == '\0')
		return ("");
	return (ft_substr(s1, begin, end - begin + 1));
}
/*
#include <stdio.h>

int main(){
	char *s = "";
	
	printf("%s\n", ft_strtrim(s, "abc"));
}
*/