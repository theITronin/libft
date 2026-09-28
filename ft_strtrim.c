/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:43:44 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/28 19:46:40 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	start(char	const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		state;

	i = 0;
	while (s1[i] != '\0')
	{
		state = 0;
		while (set[j] != '\0' || s1[i] == set[j])
		{
				state = 1;
				j++;
		}
		i++;
		if (state == 1)
			return (i);
	}

}

size_t	final(char	const *s1, char const *set)
{


}

char *ft_strtrim(char const *s1, char const *set)
{


	
}
