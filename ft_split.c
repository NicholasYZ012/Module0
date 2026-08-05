/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:27:28 by nilim             #+#    #+#             */
/*   Updated: 2026/08/05 10:02:52 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_insert(char **arr, char *tgt, char c, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		arr[i] = tgt;
		while (*tgt != c && tgt[1])
			tgt++;
		while (*tgt == c && tgt[1])
			tgt++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

static int	ft_wordcounter(char *str, char c)
{
	int	w;
	int	i;

	i = 0;
	w = 0;
	if (str[0] != c && str[0])
		w++;
	while (str[i + 1])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
			w++;
		i++;
	}
	return (w);
}

char	**ft_split(const char *s1, char c)
{
	char	*clean;
	char	**arr;
	int		w;

	clean = ft_strtrim(s1, &c);
	if (clean == NULL)
		return (NULL);
	w = ft_wordcounter(clean, c);
	arr = malloc((w + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = ft_insert(arr, clean, c, w);
	while (*clean)
	{
		if (*clean == c)
			*clean = '\0';
		clean++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main(){
	char *str = "tttHellotWorld	thappytttt";
	char **arr = ft_split(str, 't');
	for (int i = 0; arr[i]; i++)
		printf("word %d: %s\n", i + 1, arr[i]);
	free(arr);
}
*/
