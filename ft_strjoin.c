/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbustama <dbustama@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:53:11 by dbustama          #+#    #+#             */
/*   Updated: 2026/09/30 20:06:36 by dbustama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcpy(&str[i], s2, s2_len + 1);
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strjoin("Hola ", "Mundo"));
	return (0);
}
*/