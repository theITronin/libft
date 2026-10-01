/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:13:33 by dbustama          #+#    #+#             */
/*   Updated: 2026/10/01 19:02:52 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memory_free(char **array, size_t words_filled)
{
	words_filled--;
	while (words_filled > 0)
	{
		free(array[words_filled]);
		words_filled--;
	}
	free(array[words_filled]);
	free(array);
}

static int	count_words(char const *s, char c)
{
	size_t	i;
	int		words;

	i = 1;
	words = 0;
	if (s[0] != c)
		words++;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

static void	find_words(char const *s, char **array, char c)
{
	size_t	i;
	size_t	start;
	size_t	words_filled;

	words_filled = 0;
	i = 0;
	while (s[i] != '\0')
	{
		start = 0;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (s[start] != c)
		{
			*array = ft_substr(s, start, i - start);
			if (!*array)
				return (memory_free(array, words_filled));
			words_filled++;
			array++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	find_words(s, array, c);
	return (array);
}

/*
#include <stdio.h>
int	main(void)
{
	int		words;
	char	**array;

	words = count_words(" Hola      que tal estas ", ' ');
	printf("%d\n", words);
	array = ft_split(" Hola      que tal estas ", ' ');
	for(int	i = 0; i < words; i++)
	{
		printf("%s\n", array[i]);
	}
	return (0);
}
*/