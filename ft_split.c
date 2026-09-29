/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:13:33 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/29 20:17:37 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	size_t	i;
	int	words;

	i = 0;
	words = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i - 1] ==  c && s[i] != c)
			words++;
	}

}

char	**ft_split(char const *s, char c)
{
	char	**array;

	count_words(s, c);
}
