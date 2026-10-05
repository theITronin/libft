/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:13:33 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/05 16:53:18 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	memory_free(char **array, size_t words_filled)
{
	size_t	i;

	i = 0;
	while (i < words_filled)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}

static int	count_words(char const *s, char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static int	find_words(char const *s, char **array, char c, size_t words)
{
	size_t	i;
	size_t	start;
	size_t	words_filled;

	words_filled = 0;
	i = 0;
	while (words_filled < words && s[i])
	{
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (s[start] != c && s[start])
		{
			array[words_filled] = ft_substr(s, start, i - start);
			if (!array[words_filled])
				return (memory_free(array, words_filled));
			words_filled++;
		}
		i++;
	}
	array[words] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (!find_words(s, array, c, words))
		return (NULL);
	return (array);
}

/*
#include <stdio.h>
int	main(void)
{
	int		words;
	char	**array;

	words = count_words("hello!", ' ');
	printf("%d\n", words);
	array = ft_split("hello!", ' ');
	for(int	i = 0; i < words; i++)
	{
		printf("%s\n", array[i]);
		free(array[i]);
	}
	free(array);
	return (0);
}
*/